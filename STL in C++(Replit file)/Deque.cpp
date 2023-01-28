
#include <iostream>
#include <deque> //double ended queue

using namespace std;

int main() {

  deque<int> d;

  d.push_back(1);  // add element at rear/end
  d.push_front(2); // add element at front
  d.push_front(3); // add element at front
  d.push_back(4);  // add element at rear/end

  // cout<<"Print 0 index element: "<<d.at(0)<<endl;
  // cout<<"Print 1 index element: "<<d.at(1)<<endl;

  d.pop_back(); // deletes item at end/rear
  // d.pop_front(); //deletes item at start
  for (int i : d) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Front->" << d.front() << endl;
  cout << "Back->" << d.back() << endl;

  cout << "Empty or Not(0-> false,1-> true): " << d.empty() << endl;

  cout << "size before Erase " << d.size() << endl;
  d.erase(
      d.begin(),
      d.begin() +
          1); // this deletes/erases a range of elements from begin to begin+1
  cout << "size after Erase " << d.size() << endl;
}