import java.util.Scanner;

class Node {
    int data;
    Node next;
    Node prev;

    Node(int d) {
        data = d;
        next = null;
        prev = null;
    }
}

class DLL {
    Node head;
    int count;

    DLL() {
        head = null;
        count = 0;
    }

    // Insert at start
    void insertAtStart(int data) {
        Node newNode = new Node(data);
        count++;

        if (head == null) {
            head = newNode;
            return;
        }

        head.prev = newNode;
        newNode.next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int data) {
        Node newNode = new Node(data);
        count++;

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
        newNode.prev = temp;
    }

    // Insert by position (currently not implemented)
    void insertByPosition(int data) {
        System.out.println("Insert by position not implemented yet.");
    }

    // Delete at start
    void deleteAtStart() {
        if (head == null) {
            System.out.println("LIST IS EMPTY");
            return;
        }

        if (head.next == null) {
            deleteSingleNode();
            return;
        }

        Node temp = head;
        head = head.next;
        head.prev = null;
        count--;
    }

    // Delete at end
    void deleteAtEnd() {
        if (head == null) {
            System.out.println("LIST EMPTY");
            return;
        }

        if (head.next == null) {
            deleteSingleNode();
            return;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.prev.next = null;
        count--;
    }

    // Delete single node
    void deleteSingleNode() {
        count--;
        head = null;
    }

    // Traverse
    void traverse() {
        if (head == null) {
            System.out.println("LIST IS EMPTY");
            return;
        }

        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
}

public class DoublyLinkedList {
    public static void main(String[] args) {
        DLL list = new DLL();
        Scanner sc = new Scanner(System.in);
        boolean isExit = false;

        while (!isExit) {
            System.out.println("\n1. Insert At Start");
            System.out.println("2. Insert At End");
            System.out.println("3. Traverse");
            System.out.println("5. Insert By Position");
            System.out.println("4. Exit");
            System.out.println("6. Delete at Start");
            System.out.println("7. Delete at End");

            System.out.print("\nEnter the choice: ");
            int ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.print("Insert the data: ");
                    int data1 = sc.nextInt();
                    list.insertAtStart(data1);
                    break;

                case 2:
                    System.out.print("Insert the data: ");
                    int data2 = sc.nextInt();
                    list.insertAtEnd(data2);
                    break;

                case 3:
                    list.traverse();
                    break;

                case 4:
                    isExit = true;
                    break;

                case 5:
                    System.out.print("Insert the data: ");
                    int data5 = sc.nextInt();
                    list.insertByPosition(data5);
                    break;

                case 6:
                    list.deleteAtStart();
                    break;

                case 7:
                    list.deleteAtEnd();
                    break;

                default:
                    System.out.println("Invalid choice. Try again.");
            }
        }

        sc.close();
        System.out.println("\nProgram exited.");
    }
}