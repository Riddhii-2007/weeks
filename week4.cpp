#include<iostream>
using namespace std;
//Node structure(ADI representation)
struct Node{
    int data;
    Node* next;
}
//Linked list ADT classs
class SingleLinkedList{
    SingleLinkedList{
    head=NULL;
    }
    //insert at beginning
    void insertBeginning(int value)
    {
        Node* newNode= new Node;
        newNode->data=value;
        newNode->next=Null;
        if(head==NULL)
        {
            head=newNode;
        }
        newNode->next=head;
        head=newNode;
        cout<<"Inserted at Beginning Successfully\n";
    }
    //insert at end
    void inserEnd(int value)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL:
        if(head==NULL)
        {
            head=newNode;
            cout<<"List was empty.Node is inserted at start node\n";
            return;
        }
        Node* temp=head;
        while(temp->next!= NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        cout<<"Inserted at ENd sucessfully\n";
    }
}