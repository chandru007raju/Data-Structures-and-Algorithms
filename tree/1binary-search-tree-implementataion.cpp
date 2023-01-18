#include<iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BstNode* Insert(BstNode* root, int data){
    if(root == NULL){
    root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left, data);
    }
    else if(data > root->data){
         root->right = Insert(root->right, data);
    }
    return root;

}
bool Search(BstNode* root, int data){
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right, data);
}
int main(){
    BstNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 16);
    root = Insert(root, 19);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 17);
    int number;
    cout<<"enter a numer to search? \n";
    cin>> number;
    if(Search(root,number)== true) cout<<"number found \n";
    else cout<<"Not found \n";
}
