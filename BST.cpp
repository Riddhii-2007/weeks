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

// Insert into BST
Node* insert(Node* root, int val){
    if(root == NULL)
        return new Node(val);

    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Search in BST
bool Search(Node* root, int key){
    if(root == NULL) return false;
    if(root->data == key) return true;

    if(key < root->data)
        return Search(root->left, key);
    else
        return Search(root->right, key);
}

// Find Minimum
Node* findMin(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

// Delete Node
Node* deleteNode(Node* root, int key){
    if(root == NULL) return NULL;

    if(key < root->data)
        root->left = deleteNode(root->left, key);

    else if(key > root->data)
        root->right = deleteNode(root->right, key);

    else{
        // Case 1 & 2: one or no child
        if(root->left == NULL)
            return root->right;
        else if(root->right == NULL)
            return root->left;

        // Case 3: two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Traversals
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    int key = 40;
    if(Search(root, key))
        cout << "\nElement found";
    else
        cout << "\nElement not found";

    root = deleteNode(root, 50);

    cout << "\nAfter deletion (Inorder): ";
    inorder(root);

    return 0;
}