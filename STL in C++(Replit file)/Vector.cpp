#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  vector<int> a(
      5, 2); // create a vector"a" and initialize the vector elements to "2"
  cout << "print a->" << endl;
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl;

  vector<int> last(a); // copy the privious vector"a" to new vector called
                       // "last"
  cout << "print last->" << endl;
  for (int i : last) {
    cout << i << " ";
  }
  cout << endl;

  cout << "capacity of vector->" << v.capacity() << endl;
  v.push_back(1);
  cout << "capacity of vector->" << v.capacity() << endl;
  v.push_back(2);
  cout << "capacity of vector->" << v.capacity() << endl;
  v.push_back(3);
  cout << "capacity of vector->" << v.capacity() << endl;

  cout << "size of vector->" << v.size() << endl;

  cout << "Element at 2nd index->" << v.at(2) << endl;
  cout << "front " << v.front() << endl;
  cout << "back " << v.back() << endl;

  cout << "Before Pop" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();

  cout << "After Pop" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  cout << "before clear,size of v->" << v.size() << endl;

  v.clear();

  cout << "after clear, size of v->" << v.size() << endl;
}