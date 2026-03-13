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
        cout<<"Element inserted at end successfully";
    }
    void insertAtPosition(int value, int pos)
    {   
       if(pos==1)
       {
        insertBeginning(value);
        return;
       }
       Node* newNode=new Node;
       newNode->data=value;
       Node* temp=head;
       for(int i=1;i<pos-1 && temp!=NULL;i++)
       {
        temp=temp->next;
       }
       if(temp==NULL)
       {
        cout<<"Invalid position";
        return;
       }
       newNode->next=temp->next;
       temp->next=newNode;
        cout<<"Elemet inserted at give position successfully";
        return;
    }
    void deleteBeginning()
    {
        if(head==NULL)
        {
            cout<<"List is empty";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        cout<<"Element deleted at beginning successfully";
    }
    void deleteEnd()
    {
        if(head==NULL)
        {
            cout<<"List is empty";
            return;
        }
        Node* temp=head;
        if(head->next==NULL)
        {
           head=head->next;
           delete temp;
            return;
        }
        
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        cout<<"Element at end deleted successfully";
    }
    void deleteAtPosition(int pos){
        if(head==NULL){
            cout<<"List is empty";
            return;
        }
        Node* temp=head;
        if(head->next==NULL){
            head=head->next;
            delete temp;
        }
        for(int i=1;i<pos+1;i++)
        {
            temp=temp
        }
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