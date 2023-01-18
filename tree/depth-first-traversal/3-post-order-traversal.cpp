#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void Postorder(Node* root){
    if(root == NULL) return ;

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
    
}