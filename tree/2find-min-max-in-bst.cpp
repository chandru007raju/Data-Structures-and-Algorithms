#include<iostream>
using namespace std;

struct Bstnode{
    int data;
    Bstnode* left;
    BstNode* right;
};

struct BstNode* root;

//     1.iterative approach:

int FindMin(BstNode* root){
    if(root == NULL) {
        cout<<"Error: Tree is Empty"; 
        return -1; 
    }
    BstNode* current = root;
    while(current->left != NULL){
        current = current->left;
    }
    return current;
}
int FindMax(BstNode* root){
    if(root==NULL){
        cout<<"error tree is empty";
        return -1;
    }
    BstNode* current = root;
    while(current != NULL){
        current = current->right;
    }
    return current;
}

//  2.recurrsive approach;

int FindMin(BstNode* root){
    if(root == NULL){
        cout<<"tree is empty";
        return -1;
    }
    else if(root->left == NULL){
        return root->data;
    }
    //Search in left subtree;
    return FindMin(root->left);
}

int FindMax(BstNode* root){
    if(root == NULL){
        cout<<"empty tree";
        return -1;
    }
    else if(root->right == NULL){
        return root->data;
    }
    //Search in right subtree;
    return FindMax(root->right);
}

