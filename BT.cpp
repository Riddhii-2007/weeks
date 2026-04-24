
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
struct Node* root = NULL;
Node* insert(){
    int x;
    cin>>x;
    if(x == -1) return NULL;
    Node* newnode = new Node(x);
    cout<<"Enter left child of "<<x<<endl;
    newnode->left = insert();
    cout<<"Enter right child of "<<x<<endl;
    newnode->right = insert();
    return newnode;
}
//inorder Traversal(LNR)
void inorder(Node* root){
    if(root == NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//preorder Traversal(NLR)
void preorder(Node* root){
    if(root == NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//postorder Traversal(LRN)
void postorder(Node* root){
    if(root == NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    //creating a simple binary tree
    root = insert();
    cout<<"Inorder Traversal: ";    
    inorder(root);
    cout<<"\nPreorder Traversal: ";
    preorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);
    return 0;
}