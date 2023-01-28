#include <iostream>
#include <queue>

using namespace std;

int main() {

  // max heap
  priority_queue<int> maxi;

  // min heap
  priority_queue<int, vector<int>, greater<int>> mini;

  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(4);

  int n = maxi.size();
  cout << "using maxi->";
  for (int i = 0; i < n; i++) {
    cout << maxi.top() << " ";
    maxi.pop();
  }
  cout << endl;

  mini.push(1);
  mini.push(2);
  mini.push(3);
  mini.push(4);

  int nn = mini.size();
  cout << "using mini->";
  for (int i = 0; i < nn; i++) {
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;

  cout << "Empty?0->no,1->yes: " << mini.empty() << endl;
}