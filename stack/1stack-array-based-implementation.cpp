#include <iostream>

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void Push(int x){
    if(top == MAX_SIZE-1){
        std::cout<<"stack overflow \n";
        return;
    }
    // both lines combined can be written as
    A[++top] = x;    // A[++top] = x;
}
void Pop(){
    if(top == -1){
        std::cout <<"stack is empty";
        return;
    }
    top = top-1; // top--;
}
int Top(){
   return A[top];
}

void Print(){
    std::cout << "stack elements are:";
    for( int i=0;i<=top;i++){
        std::cout<< A[i]<<" ";
    }
    std::cout << "\n";
}
int main(){
    Push(5); Print();
    Push(7); Print();
    Push(9); Print();
    Pop(); Print();
    std::cout<< Top();
}