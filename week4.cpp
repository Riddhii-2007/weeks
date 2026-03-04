#include<stdio.h>
using namespace std;
struct Node{
    int data;
    Node* next;
}
class SingleLinkedlist
{
    private:
    Node* head;

    public:
    //constructor
    SingleLinkedlist()
    {
        head=NULL;
    }

    void deletBegnning()
    {
        if(head==NULL)
        {
            cout<<"List is empty";
            return;
        }
        Node* temp==head;
        head=head->next;
        delete temp;
        cout<<"Deleted from beginning successfully"; 
    }

    void deletEnd()
    {
        if(head==NULL)
        {
            cout<<"List is empty";
            return;
        }
        if(head->next=NULL)
        {
            delete head;
            head=NULL:
            cout<<"element is deleted at end,list is empty\n";
            return;
        }
        Node* temp=head;
        if(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
    }
}