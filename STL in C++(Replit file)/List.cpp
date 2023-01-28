#include <iostream>
#include <list> //doubly linked list is implemented in list stl

// direct access is not possible...we cannot use "l.at(5);"...for accessing

using namespace std;

int main() {

  list<int> l;

  list<int> l2(7, 1); // making a list and initializing it to zero
  for (int i : l2) {
    cout << i << " ";
  }
  cout << endl;

  l.push_back(2);
  l.push_back(3);
  l.push_front(1);

  for (int i : l) {
    cout << i << " ";
  }
  cout << endl;

  l.erase(l.begin()); // here "l.begin" is a pointer and so the first item gets
                      // deleted
  cout << "After Erase: ";
  for (int i : l) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Size of list->" << l.size() << endl;
  // l.pop_back(); //To delete a item from last
  l.pop_front(); // To delete a item from first/start
  cout << "Size of list->" << l.size();
}