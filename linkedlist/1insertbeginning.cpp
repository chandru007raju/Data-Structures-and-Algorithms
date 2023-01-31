
#include<iostream>
#include<string>
using namespace std;

struct Node
{
    int id;
    string naam;
    int salary;
    struct Node* link;
    
};
struct Node* head; // global variable
void Insert(int x,string naam,int y){
    Node* temp = new Node();
    (*temp).id = x;
    (*temp).naam = naam;
    (*temp).salary = y;
    (*temp).link = NULL;
    if(head != NULL) (*temp).link = head;
    head = temp;
}
void Print(){
    
    struct Node* temp = head;
    std::cout<<"List is : "<<endl;
    while(temp != NULL){
        std::cout<< (*temp).id<< " "<<(*temp).naam << " "<<(*temp).salary ;
        temp = (*temp).link;
        std::cout << "\n" ;
    }
    std::cout << "\n" ;
}
int main()
{
    head =NULL;
    std::cout <<"enter how many numbers u want to insert ";
    int n,x,y;
    string naam;

    std::cin >> n;
    for (int i = 0; i<n ; i++){
        std::cout << "enter the id ";
        std::cin >> x;
        std::cout<< "enter tha name ";
        std::cin>> naam;
        std::cout << "enter the salary ";
        std::cin >> y;
        Insert(x,naam,y);
        Print();
        
    }

}



