
#include<iostream>

struct Node{
    int data;
    struct Node* link;
};
struct Node* head;
void Insert(int x){
    Node* temp = new Node();
    (*temp).data = x;
    (*temp).link = NULL;
    if(head != NULL) (*temp).link = head;
    head = temp;
}
void Print(){
    struct Node* temp = head;
    std::cout<<"List is : ";
    while(temp != NULL){
        std::cout<< (*temp).data << " " ;
        temp = (*temp).link;
    }
    std::cout << "\n" ;
}
void Reverse(){
     Node *current, *prev, *next;
     current = head;
     prev = NULL;
     while(current != NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
     }
     head = prev;
 
}
int main(){
    head = NULL;
    Insert(4);
    Insert(6);
    Insert(7);    
    Insert(8);
    Insert(9);
    Print();
    std::cout<<"reverse of ";
    
    Reverse();
    Print();
}