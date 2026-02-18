#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }

};

class LinkedList{
public:
    Node *head;
    int count;

    LinkedList(){
        head = NULL;
        count = 0;
    }

    //******** INSERTION OPERATION ************

    //insert at start
    void insertAtStart(int data){

        Node *newNode = new Node(data);
        count++;

        // check if head == null, which means list is empty
        if (head == NULL){
            head = newNode;
        }else{

            //100 -> 3 -> 4 -> 5 -> 7
            newNode -> next = head;
            head = newNode;

        }
    }

    // insert at end
    void insertAtEnd(int data){
        
        Node *newNode = new Node(data);
        count++;

        // list is empty
        if (head == NULL){
            head = newNode;
        }else{

            Node *temp = head;

            while(temp -> next != NULL){
                temp = temp -> next;
            }

            temp -> next = newNode;
        }

    }

    // insert by position 
    void insertByPosition(int data){

        int position;
        cout << "\nEnter the position:";
        cin >> position;

        if ((position > count + 1) || (head == NULL && position != 1)){
            cout << "INVALID POSITION\n";
            return;
        }

        // insert at start
        if (position == 1){
            insertAtStart(data);
            return;
        }

        // insert at end
        else if (position == count + 1){
            insertAtEnd(data);
            return;
        }

        // start at position
        Node *newNode = new Node(data);
        count++;

        int currPosition = 1;
        Node *temp = head;

        while(temp != NULL && currPosition < position - 1){
            temp = temp -> next;
            currPosition++;
        }

        newNode -> next = temp -> next;
        temp -> next = newNode;
    }


    //******** DELETION OPERATION ************

    // Delete at start
    void deleteAtStart(){

        // if list is empty
        if (head == NULL){
            cout << "Empty list, cannot delete\n";
            return;
        }

        Node *temp = head;
        head = head -> next;
        delete(temp); 
        count--;
    }

    // delete at end
    void deleteAtEnd(){

        // if list is empty
        if (head == NULL){
            cout << "Empty list, cannot delete\n";
            return;
        }

        Node *fast = head, *slow = NULL;

        while(fast -> next != NULL){
            slow = fast;
            fast = fast -> next;
        }

        slow -> next = NULL;
        delete(fast);
        count--;

    }


    // traversing the list
    void traverse(){

        if (head == NULL){
            cout << "LIST IS EMPTY\n";
            return;
        }

        Node *temp = head;

        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << "\n";
    }
};


int main()
{

    LinkedList list;
    bool isExit = false;

    while(1){

        cout << "1. Insert At Start\n";
        cout << "2. Insert At End\n";
        cout << "3. Traverse\n";
        cout << "5. Insert By position\n";
        cout << "4. Exit\n";
        cout << "6. Delete at start\n";
        cout << "7. Delete at End\n";

        int ch;
        cout << "\nEnter the choice: ";
        cin >> ch;

        switch(ch){

            case 1:{
                int data;
                cout << "\nInsert the data which you want\n";
                cin >> data;
                list.insertAtStart(data);
                break;
            }

             case 2:{
                int data;
                cout << "\nInsert the data which you want\n";
                cin >> data;
                list.insertAtEnd(data);
                break;
            }

             case 3:{
                list.traverse();
                break;
            }

            case 4:{
                isExit = true;
                break;
            }

            case 5:{
                int data;
                cout << "\nInsert the data which you want\n";
                cin >> data;
                list.insertByPosition(data);
                break;
            }

            case 6:{
                list.deleteAtStart();
                break;
            }

            case 7:{
                list.deleteAtEnd();
                break;
            }

        }

        if (isExit == true){
            break;
        }

    }
  
    cout << "\n";

    return 0;
}