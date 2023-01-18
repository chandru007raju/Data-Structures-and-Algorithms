#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void Inorder(Node* root){
    if(root == NULL) return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}