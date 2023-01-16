
#include<iostream>


struct Node
{
    int data;
    struct Node* link;
    
};
struct Node* head; // global variable
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
int main()
{
    head =NULL;
    std::cout <<"enter how many numbers u want to insert";
    int n,x;
    std::cin >> n;
    for (int i = 0; i<n ; i++){
        std::cout << "enter the number";
        std::cin >> x;
        Insert(x);
        Print();
        
    }

}



