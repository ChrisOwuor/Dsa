#include <iostream>

// Node class represents each element in the linked list
class Node
{
public:
    int data;   // Data of the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize the node with data and a null pointer for next
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class represents the linked list
class LinkedList
{
private:
    Node *head; // Pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to add a new node with given data to the end of the list
    void append(int value)
    {
        Node *newNode = new Node(value); // Create a new node with the given data

        // If the list is empty, make the new node the head
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        // Traverse the list to find the last node
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }

        // Append the new node to the end of the list
        current->next = newNode;
    }

    // Function to display the elements of the linked list
    void display()
    {
        Node *current = head;

        // Traverse the list and print each element
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << std::endl;
    }
};

int main()
{
    // Create a linked list object
    LinkedList myList;

    // Add elements to the linked list
    myList.append(10);
    myList.append(20);
    myList.append(30);

    // Display the elements of the linked list
    std::cout << "Linked List: ";
    myList.display();

    return 0;
}
