#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;     // Array to store stack elements
    int capacity; // Maximum capacity of the stack
    int top;      // Index of the top element

public:
    // Constructor to initialize an empty stack
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1; // Stack is initially empty
    }

    // Destructor to free the dynamically allocated memory
    ~Stack()
    {
        delete[] arr;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull()
    {
        return top == capacity - 1;
    }

    // Function to push an element onto the stack
    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow: Cannot push element, the stack is full." << endl;
            return;
        }

        arr[++top] = value;
        cout << "Pushed " << value << " onto the stack." << endl;
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow: Cannot pop element, the stack is empty." << endl;
            return;
        }

        int poppedValue = arr[top--];
        cout << "Popped " << poppedValue << " from the stack." << endl;
    }

    // Function to get the top element of the stack without popping it
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1; // Return a sentinel value indicating an error
        }

        return arr[top];
    }
};

int main()
{
    // Create a stack with a capacity of 5
    Stack myStack(5);

    // Perform stack operations
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element of the stack: " << myStack.peek() << endl;

    myStack.pop();

    return 0;
}
