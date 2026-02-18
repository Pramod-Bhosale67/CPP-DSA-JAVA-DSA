import java.util.Scanner;

class Node{
    public int data;
    public Node next;

    public Node(int d){
        data = d;
        next = null;
    }
}

class LinkedList{
    Node head;
    int count;

    public LinkedList(){
        head = null;
        count = 0;
    }

    //******** INSERTION OPERATION ************

    //insert at start
    public void insertAtStart(int data){
        Node newNode = new Node(data);
        count++;

        // check if head == null, which means list is empty
        if (head == null){
            head = newNode;
        }else{
            newNode.next = head;
            head = newNode;
        }
    }

    // insert at end
    void insertAtEnd(int data){

        Node newNode = new Node(data);
        count++;

        // list is empty
        if (head == null){
            head = newNode;
        }else{

            Node temp = head;

            while(temp.next != null){
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    // insert by position
    void insertByPosition(int data){
        Scanner sc = new Scanner(System.in);

        int position;
        System.out.println("Enter the position");
        position = sc.nextInt();

        if ((position > count + 1) || (head == null && position != 1)){
            System.out.println("INVALID POSITION");
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
        Node newNode = new Node(data);
        count++;

        int currPosition = 1;
        Node temp = head;

        while(temp != null && currPosition < position - 1){
            temp = temp.next;
            currPosition++;
        }

        newNode.next = temp.next;
        temp.next = newNode;
    }

    //******** DELETION OPERATION ************

    // Delete at start
    void deleteAtStart(){

        // if list is empty
        if (head == null){
            System.out.println("Empty list, cannot delete");
            return;
        }

        Node temp = head;
        head = head.next;
        count--;
    }

    // delete at end
    void deleteAtEnd(){

        // if list is empty
        if (head == null){
            System.out.println("Empty list, cannot delete");
            return;
        }

        Node fast = head, slow = null;

        while(fast.next != null){
            slow = fast;
            fast = fast.next;
        }

        slow.next = null;
        count--;

    }


    // traversing the list
    void traverse(){

        if (head == null){
            System.out.println("Empty list");
            return;
        }

        Node temp = head;

        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        Scanner sc = new Scanner(System.in);
        boolean isExit = false;

        while (true) {
            System.out.println("1. Insert At Start");
            System.out.println("2. Insert At End");
            System.out.println("3. Traverse");
            System.out.println("5. Insert By Position");
            System.out.println("4. Exit");
            System.out.println("6. Delete at Start");
            System.out.println("7. Delete at End");

            System.out.print("\nEnter your choice: ");
            int ch = sc.nextInt();

            switch (ch) {
                case 1: {
                    System.out.print("Enter data: ");
                    int data = sc.nextInt();
                    list.insertAtStart(data);
                    break;
                }

                case 2: {
                    System.out.print("Enter data: ");
                    int data = sc.nextInt();
                    list.insertAtEnd(data);
                    break;
                }

                case 3: {
                    list.traverse();
                    break;
                }

                case 4: {
                    isExit = true;
                    break;
                }

                case 5: {
                    System.out.print("Enter data: ");
                    int data = sc.nextInt();
                    list.insertByPosition(data);
                    break;
                }

                case 6: {
                    list.deleteAtStart();
                    break;
                }

                case 7: {
                    list.deleteAtEnd();
                    break;
                }

                default:
                    System.out.println("Invalid choice");
            }

            if (isExit) break;
        }

        sc.close();
        System.out.println("\nProgram exited.");
    }
}