#include <iostream>
#include <map> // O(logn) Time complexity...implemented using redblack Tree
// #include<unordered_map> //O(1) implemented using hashTable;

using namespace std;

int main() {
  map<int, string> m;
  // unordered_map<int,string> m;

  m[0] = "chandu";
  m[1] = "chandu1";
  m[2] = "chandu2";
  m[3] = "chandu3";

  m.insert({5, "chandu5"});

  cout << "before erase" << endl;
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }

  cout << "finding -3 ->" << i.count(3)
       << endl; // checking value -3 is present or not?
  m.erase(1);
  cout << "After erase" << endl;
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }

  auto it = m.find(3); // finding the location of value 3
  cout << "value 3 is present at itr->" << (*it).first << endl;
  for (auto i = it; i != m.end();
       i++) { // print all values that are present after value 3;
    cout << (*i).first << " " << (*i).second << endl;
  }
}