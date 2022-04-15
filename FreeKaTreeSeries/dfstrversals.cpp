#include<iostream>

using namespace std;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
    Node(int data){
        val = data;
        left = right = NULL;
    }
};

void preorder(Node * head){
    if(head==NULL){
        return;
    }
    cout << head->val << " ";
    preorder(head->left);
    preorder(head->right);
}

void inorder(Node*head){
    if(head==NULL){
        return;
    }
    inorder(head->left);
    cout << head->val << " ";
    inorder(head->right);
}

void postorder(Node * head){
    if(head==NULL){
        return;
    }
    postorder(head->left);
    postorder(head->right);
    cout << head->val << " ";
}

int main(){
    struct Node * root =  new Node(1);
    root->left=new Node(2);
    root->right= new Node(3);
    root->left->right = new Node(5);
    cout << "pre order traversal is "<< endl;
    preorder(root);
    cout << endl;
    cout << "post order traversal is" << endl;
    postorder(root);
    cout << endl;
    cout << "inorder traversal is" << endl;
    inorder(root);
}

