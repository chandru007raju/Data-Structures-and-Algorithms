#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

void LevelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    //while there is at least one discovered node
    while(!Q.empty()){
        Node* current = Q.front();
        cout<<current->data <<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop(); //Removing the element from the front.
    }
}
