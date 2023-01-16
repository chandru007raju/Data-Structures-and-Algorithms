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
void Delete(int n){
    Node* temp1 = head;
    if(n == 1){
        head = temp1->link;
        delete temp1;
        return;
    }
    int i;
    for(i = 0; i<n-2; i++){
        temp1 = temp1->link;
    }
    Node* temp2 = temp1->link;
        temp1->link = temp2->link;
        delete temp2;
    

}
 int main()
 {
    head = NULL;
    Insert(3);
    Insert(5);
    Insert(7);
    Insert(9);
    Insert(5);
    Insert(7);
    Insert(9);    
    Print();
    std::cout <<"enter the position to delete the node: ";
    int n;
    std::cin>> n;
    Delete(n);
    Print();
 }