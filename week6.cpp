#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class CLL{

    private:
    Node*head=NULL;
    public:
    void insertBeginning(int value)
    {   Node* newNode= new Node;
        newNode->data=value;
        newNode->next=NULL;
        Node* temp=head;
        if(head==NULL)
        {
            head=newNode;
            newNode->next=head;
            cout<<"List is empty , inserted a tbeginning sucessfully";
            return;
        }
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        head=newNode;
        newNode->next=head;

    }
    void search(int key)
    {
        int pos=1;
        if(head==NULL)
        {
            cout<<"List is empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=head)
        {
            if(key==temp->next!=)
        }
    }
};