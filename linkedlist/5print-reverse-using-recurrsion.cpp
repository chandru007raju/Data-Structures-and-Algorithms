#include<iostream>

struct Node
{
    int data;
    struct Node* link;
};
void Print(struct Node* p){
    if(p == NULL){        //Exit condition   
        std::cout<<"\n";
         return;
    }
    else{
    std::cout<< p->data<< " "; 
    Print(p->link);// Recursive call
    
    }
}
void ReversePrint(struct Node* p){
    if(p == NULL){        
        std::cout<<"\n";
         return;
    }
    else{
    ReversePrint(p->link);
    std::cout<< p->data<< " ";    
    }
}
////////////
struct Node* Insert(Node* head, int x){
// void Insert(int x){
    Node* temp = new Node();
    (*temp).data = x;
    (*temp).link = NULL;
    if(head != NULL) (*temp).link = head;
    head = temp;
        return head;

}
//////////....SOMETHINGS WRONG HERE...
// struct Node* Insert(Node* head, int data){
//     Node *temp = new Node();
//     temp-> data =data;
//     temp->link = NULL;
//     if(head == NULL) head = temp; 
       
//     else {
//         Node* temp1 = head;
//         while(temp->link != NULL) temp1 = temp1->link;
//         temp1->link = temp;
        
//     }
//     return head;
// }

int main(){
    struct Node* head = NULL;// Local variable
    head = Insert(head, 5);
    head = Insert(head, 6);
    head = Insert(head, 7);
    head = Insert(head, 8);
    std::cout<<"the linked list is : \n";
    Print(head);
    std::cout<<"the Reverse linked list is :";
    ReversePrint(head);
}   