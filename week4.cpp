#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class SingleLinkedlist
{
    private:
    Node* head;

    public:
    SingleLinkedlist()
    {
        head=NULL;
    }
    void insterBeginning(int value)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=head;
        head=newNode;
    }
    void insertEnd(int value)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            cout<<"List is empty,elemnt inserted at beginning";
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void insertAtPosition(int value, int pos)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=head;
        
    }
};
int main()
{   
    SingleLinkedlist list;
    int choice,val,pos;
    do{
        cout << "\n===== SINGLY LINKED LIST ADT MENU =====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete at Position\n";
        cout << "7. Search Element\n";
        cout << "8. Display List\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insertBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insertEnd(value);
                break;

            case 3:
                cout << "Enter value and position: ";
                cin >> value >> pos;
                list.insertAtPosition(value, pos);
                break;

            case 4:
                list.deleteBeginning();
                break;

            case 5:
                list.deleteEnd();
                break;

            case 6:
                cout << "Enter position: ";
                cin >> pos;
                list.deleteAtPosition(pos);
                break;

            case 7:
                cout << "Enter element to search: ";
                cin >> value;
                list.search(value);
                break;

            case 8:
                list.display();
                break;

            case 9:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

     }
}