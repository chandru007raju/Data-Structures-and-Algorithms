#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
  
  vector<int> v;

  v.push_back(2);
  v.push_back(4);
  v.push_back(6);
  v.push_back(8);
  v.push_back(10);

  //Searching "8" is present or Not using binary Search
  cout<<"Finding 8->"<<binary_search(v.begin(),v.end(),8)<<endl;

  cout<<"Lower bound->"<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl; 
cout<<"upper bound->"<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl; 

  int a = 3;
  int b = 6;

  //To find Max and Min
  cout<<"max-> "<<max(a,b);
  
  cout<<"min-> "<<min(a,b);

  //To Swap Two Numbers
  swap(a,b);
  cout<<endl<<"a->"<<a <<endl;

  //To Reverse a string
  string s1 ="abcd";
  reverse(s1.begin(),s1.end());
  cout<<"Reverse string is ->"<<s1<<endl;

  //To Rotate elements in the vector

  rotate(v.begin(),v.begin()+1,v.end());
  cout<<"After Rotate"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }
  
}