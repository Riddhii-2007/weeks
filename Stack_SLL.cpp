#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
class Stack
{
    Node* top;

public:
    // Constructor
    Stack()
    {
        top = NULL;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    // In linked list, stack becomes full only when heap memory is exhausted.
    bool isFull()
    {
        try
        {
            // Try allocating memory for one node
            Node* temp = new Node;
            // If allocation succeeds,immediately free memory
            delete temp;
            // Memory available -> stack not full
            return false;
        }

        // If memory allocation fails,new throws bad_alloc exception
        catch(bad_alloc& e)
        {
            // No memory available -> stack full
            return true;
        }
    }

    void push(int val)
    {
        if(isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }

        Node* newNode = new Node{val, NULL};

        newNode->next = top;
        top = newNode;
        cout << val << " pushed into stack\n";
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        top = top->next;
        cout << temp->data << " is deleted\n";
        delete temp;
    }

    bool search(int val)
    {
        Node* temp = top;

        while(temp != NULL)
        {
            if(temp->data == val)
                return true;

            temp = temp->next;
        }

        return false;
    }

    int peek(int pos)
    {
        if(isEmpty())
        {
            cout << "Stack Underflow\n";
            return -1;
        }

        Node* temp = top;

        
        for(int i = 1; temp != NULL && i < pos; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout << "Invalid Position\n";
            return -1;
        }

        return temp->data;
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty\n";
            return;
        }

        Node* temp = top;

        cout << "TOP -> ";

        while(temp != NULL)
        {
            cout << temp->data;

            if(temp->next != NULL)
                cout << " -> ";

            temp = temp->next;
        }

        cout << endl;
    }
    ~Stack()
    {
        while(top != NULL)
        {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main()
{
    Stack s;

    int choice, val, pos;

    do
    {
        cout << "\n========== STACK MENU ==========\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Search\n";
        cout << "4. Peek\n";
        cout << "5. Display\n";
        cout << "6. Check Empty\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:

                cout << "Enter value to push: ";
                cin >> val;

                s.push(val);

                break;

            case 2:

                s.pop();

                break;

            case 3:

                cout << "Enter value to search: ";
                cin >> val;

                if(s.search(val))
                    cout << val << " found in stack\n";
                else
                    cout << val << " not found\n";

                break;

            case 4:

                cout << "Enter position: ";
                cin >> pos;

                val = s.peek(pos);

                if(val != -1)
                {
                    cout << "Element at position "
                         << pos << " is "
                         << val << endl;
                }

                break;

            case 5:

                s.display();

                break;

            case 6:

                if(s.isEmpty())
                    cout << "Stack is Empty\n";
                else
                    cout << "Stack is Not Empty\n";

                break;

            case 7:

                cout << "Exiting Program...\n";

                break;

            default:

                cout << "Invalid Choice\n";
        }

    } while(choice != 7);

    return 0;
}