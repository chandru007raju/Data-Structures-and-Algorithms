#include <iostream>
#include <unordered_set>

using namespace std;

//*******Mostly used functions***********
//count();
//erase();

int main(){
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(12);

    cout<<s.count(10);
    if(s.count(5)==0){
        cout<<"Not Present";
    }
    s.erase(10); //erase 10

    // if we want to erase a range of elements we use this syntax
    s.erase(s.begin(),s.end());
    
}