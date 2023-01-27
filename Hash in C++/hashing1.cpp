#include <iostream>
#include <unordered_set>

using namespace std;

//Implementation of hash in C++ 
//********functions in hashing*************
//insert();
//find();
//end();
//begin();
//clear();
//size();


int main(){
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(12);
    s.insert(11);

    if(s.find(5) == s.end()){
        cout << "Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    for(auto it = s.begin();it != s.end();it++){
        cout<<(*it)<<" ";
    }
    s.clear();
    cout<<s.size();

}


