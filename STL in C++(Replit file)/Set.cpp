#include <iostream>
#include <set>
// #include<unordered_set>

using namespace std;

int main() {
  set<int> s;
  // unordered_set<int>s;  //we can also use unordered set

  s.insert(3);
  s.insert(3);
  s.insert(2);
  s.insert(1);
  s.insert(5);
  s.insert(5);
  s.insert(6);
  s.insert(9);

  for (auto i : s) {
    cout << i << endl;
  }
  cout << endl;

  set<int>::iterator it = s.begin();
  it++;
  // s.erase(s.begin());
  s.erase(it);

  for (auto i : s) {
    cout << i << endl;
  }
  cout << endl;

  cout << "5 is present or not ->" << s.count(5) << endl;
  cout << "-5 is present or not ->" << s.count(-5) << endl;

  set<int>::iterator itr = s.find(5);
  cout << "5 is present at itr->" << *it << endl;
  for (auto it = itr; it != s.end();
       it++) { // print all elements that come after 5;
    cout << *it << " ";
  }
  cout << endl;
}