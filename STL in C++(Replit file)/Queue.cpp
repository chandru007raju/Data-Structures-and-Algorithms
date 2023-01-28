#include <iostream>
#include<queue>

using namespace std;

int main() {
  queue<string> q;

  q.push("AAAA");
  q.push("BBBA");
  q.push("CCCA");
  q.push("DDDA");

  cout<<"Size before pop "<<q.size()<<endl;

  cout<<" First Element "<<q.front()<<endl;
  q.pop();
  cout<<" First Element "<<q.front()<<endl;
  cout<<"Size After pop "<<q.size()<<endl;

}