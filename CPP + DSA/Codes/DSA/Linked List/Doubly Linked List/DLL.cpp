#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }

};

class DLL{
public:
    Node *head;
    int count;

    DLL(){
        head = NULL;
        count = 0;
    }   

    // ******** INSERTION OPERATION ************

    // insert at start
    void insertAtStart(int data){

        Node *newNode = new Node(data);
        count++;

        // if list is empty, then node itself is a first node
        if (head == NULL){
            head = newNode;
            return;
        }

        // 1 2 3 4

        // newNode = 10

        // 10 1 2 3 4

        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }

    // insert at end
    void insertAtEnd(int data){

        Node *newNode = new Node(data);
        count++;

         // if list is empty, then node itself is a first node
        if (head == NULL){
            head = newNode;
            return;
        }

        Node *temp = head;

        while(temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> next = newNode;
        newNode -> prev = temp;

    }

    // insert by position
    void insertByPosition(int data){
        
    }

    // ******** DELETION OPERATIONS ************

    // delete at start
    void deleteAtStart(){

        // if list is empty
        if (head == NULL){
            cout << "LIST IS EMPTY\n";
            return;
        }

        // if list contains only one node
        if (head -> next == NULL){
            deleteSingleNode();
            return;
        }

        Node *temp = head;
        head = head -> next;
        head -> prev = NULL;
        delete(temp);
        count--;
    }

    // function to delete single node
    void deleteSingleNode(){
        count--;
        Node *temp = head;
        head = NULL;
        delete(temp);
    }

    // delete at end
    void deleteAtEnd(){

        // if list is empty
        if (head == NULL){
            cout << "LIST EMPTY\n";
            return;
        }

        // if list contains only one node
        if (head -> next == NULL){
            deleteSingleNode();
            return;
        }

        Node *temp = head;

        while(temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> prev -> next = NULL;
        delete(temp);
        count--;
    }


    // traversal
    void traverse(){

        //if list is empty
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

    DLL list;
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