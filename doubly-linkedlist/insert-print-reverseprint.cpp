#include<iostream>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head;

struct Node* GetNewNode(int x){
    struct Node* newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void InsertAtHead(int x){
    struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void InsertAtTail(int x){
    struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            }
            newNode->prev = temp;
            temp->next = newNode;
    
}
void Print(){
    struct Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<" \n";

}
void ReversePrint(){
    struct Node* temp = head;
    if(temp == NULL) return;
    while(temp->next != NULL){
        temp = temp->next;
    }
    std::cout<<"Reverse is : ";
    
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp = temp->prev;
    }
    std::cout<<"\n";
}

int main(){
    head = NULL;
    InsertAtTail(2); Print(); ReversePrint();
    InsertAtTail(3); Print(); ReversePrint();
    InsertAtTail(4); Print(); ReversePrint();
    InsertAtTail(5); Print(); ReversePrint();
    InsertAtTail(6); Print(); ReversePrint();
    // InsertAtHead(2); Print(); ReversePrint();
    // InsertAtHead(3); Print(); ReversePrint();
    // InsertAtHead(4); Print(); ReversePrint();
    // InsertAtHead(5); Print(); ReversePrint();
    // InsertAtHead(6); Print(); ReversePrint();
}