#include <iostream>

struct Node{
    int data;
    struct Node* link;
};
struct Node* head;
void Print(int data, int n){
    Node* temp = head;
    std::cout<<"the elements in list are:";
    while(temp!= NULL){
        std::cout<< temp->data <<" ";
        temp = temp->link;        
    }
}

void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->link = NULL;
    if(n == 1){
        temp1->link = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0;i<n-2;i++){
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;
}

int main(){
    head = NULL;
    int n, data,x;
    std::cout << "enter the number of elements to be inserted?";
    std::cin>> x;
    for( int i=0;i<x;i++){
        std::cout << "enter the element to be insert: ";
        std::cin>> data;
        std::cout<<"enter the position to be inserted: ";
        std::cin>> n;
        Insert(data,n); 
    }
    Insert(9,5);
    Print(data,n);
}
