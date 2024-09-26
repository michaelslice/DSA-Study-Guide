#include <iostream>

// Node structure
struct Node {
    int data;        // Data part
    Node* next;      // Pointer to the next node
    
    // Constructor to initialize the node
    Node(int val) : data(val), next(nullptr) {}
};

/**
 *  list1: Just refers to the current node in the list
 *  list1->next: Accessess the next pointer that the current node points to 
 * 
 *  list1 = list1->next: Updates the current node to point to the next node in the list
 */
class LinkedList {
private:
    Node* head;

public:
    // Default constructor initializer list
    LinkedList(): head(nullptr);


    void insertAtBeginning(int value){
        // Declare a pointer of type node, pointing to the new node we create
        Node* new_node = new Node(value);
        // Access the next pointer of the new node, to old head node
        new_node->next = head;
        // Make head the new node 
        head = newNode;
    };

    void insertAtEnd(int value){
        // Allocate a new node on the heap
        Node* new_node = new Node(value);

        // If we insert at the end check if list empty
        if(head == nullptr){
            head = new_node;
            return;
        }

        Node* temp = head;
        // Iterating until we get to the last node in the list
        while(temp != nullptr){
            temp = head->next;
        }
        // Now we know temp->next is at the last node so now append our new node
        temp->next = new_node;
    }

    void deleteNode(int value){
        // If the list is empty
        if(head == nullptr){
            return;
        }

        // If the node to be deleted is the head
        if(head->data == value){
            Node* temp = head;
            head = head->next; // Move head to the next node
            delete temp;
            return;
        }

        // Traverse the list to find the node to delete
        while(temp->next != nullptr && temp->next->data != value){
            temp = temp->next;
        }

        // Bypass node to delete it
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data;
            // To iterate through the list we need to continue updating our temp node, to the next node
            temp = temp->next;
        }
    }

};