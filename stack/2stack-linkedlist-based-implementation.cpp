#include <iostream>

struct Node{
    int data;
    struct Node* link;
};
struct Node* top = NULL;
void Push(int x){
    struct Node* temp = new Node();
    temp ->data = x;
    temp->link = top;
    top = temp;
}
void Pop(){
    struct Node* temp;
    if(top == NULL){
        return;
    }
    temp = top;
    top = top->link;
    delete temp;
}
void Print(){
    struct Node* temp = top;
    while(temp != NULL){
        std::cout<<temp->data <<" ";
        temp = temp-> link;
    }
    std::cout<<"\n";
}
int main (){
    Push(4); Print();
    Push(6); Print();
    Push(9); Print();
    Push(9); Print();
    Pop(); Print();
    Push(6); Print();
    Push(9); Print();
    Pop(); Print();

}