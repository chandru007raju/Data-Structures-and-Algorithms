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
int main(){
    BstNode* root = NULL;
    int maxx;
    int minn;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 16);
    root = Insert(root, 19);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 17);
    int number;
    cout<<"enter a number to search? \n";
    cin>> number;
    if(Search(root,number)== true) cout<<"number found \n";
    else cout<<"Not found \n";
    maxx = FindMax(root);
    minn = FindMin(root);
    cout<<"max element in tree is :"<< maxx<<" \n";
    cout<<"min element in tree is :"<< minn<<" \n";
}
