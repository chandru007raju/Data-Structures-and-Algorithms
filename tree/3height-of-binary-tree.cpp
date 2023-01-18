#include <iostream>
using namespace std;

struct Node{
    int data; 
    Node* left;
    Node* right;
};

struct Node* root;

int FindHeight(struct Node* root){
    if(root == NULL){
        return -1;
    }
    leftHeight = FindHeight(root->left);
    rightHeight = FindHeight(root->right);
    return max(leftHeight, rightHeight)+1;
}