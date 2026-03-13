#include<iostream>
using namespace std;

#define SIZE 5

class Stack
{
    int top;
    int st[SIZE];

public:
    Stack()
    {
        top = -1;   // stack is empty
    }

    bool isFull()
    {
        if(top == SIZE-1)
            return true;
        else
            return false;
    }

    bool isEmpty()
    {
        if(top == -1)
            return true;
        else
            return false;
    }

    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack Overflow\n";
            return;
        }

        top++;
        st[top] = value;
        cout<<"Element pushed\n";
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow\n";
            return;
        }

        cout<<"Element popped: "<<st[top]<<endl;
        top--;
    }

    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty\n";
            return;
        }

        cout<<"Top element: "<<st[top]<<endl;
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty\n";
            return;
        }

        cout<<"Stack elements:\n";
        for(int i = top; i >= 0; i--)
        {
            cout<<st[i]<<endl;
        }
    }
};

int main()
{
    Stack s;
    int op,value;

    do{
        cout<<"\nChoose Operation\n";
        cout<<"1. Insert element\n";
        cout<<"2. Delete element\n";
        cout<<"3. Peek (Top element)\n";
        cout<<"4. Check if stack is full\n";
        cout<<"5. Check if stack is empty\n";
        cout<<"6. Display stack\n";
        cout<<"7. Exit\n";

        cin>>op;

        switch(op)
        {
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                if(s.isFull())
                    cout<<"Stack is Full\n";
                else
                    cout<<"Stack is Not Full\n";
                break;

            case 5:
                if(s.isEmpty())
                    cout<<"Stack is Empty\n";
                else
                    cout<<"Stack is Not Empty\n";
                break;

            case 6:
                s.display();
                break;

            case 7:
                cout<<"Exiting...\n";
                break;

            default:
                cout<<"Invalid option\n";
        }

    }while(op != 7);

    return 0;
}