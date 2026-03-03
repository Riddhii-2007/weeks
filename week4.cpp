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
}