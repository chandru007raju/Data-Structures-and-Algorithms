#include <iostream>
using namespace std;

void create_array(int array[],int size);
void display_array(int array[],int size);
int main()
{
    int size;
    int *array = NULL;
    cout <<"enter the size of array: ";
    cin >> size;

    // int array[size];

    array = new int[size];//this way or u can also use this code 
    // int *array = new int[size] ;

    create_array(array,size);
    display_array(array,size);
    // display_array(*ptr[],size);

    return 1;
}
void create_array(int array[],int size){
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}
void display_array(int array[],int size){
    for(int i=0;i<size;i++){
       cout<<array[i]<<" ";
    }
}