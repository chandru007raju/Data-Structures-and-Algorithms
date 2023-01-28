#include <iostream>
#include <stack>

using namespace std;

int main() {

  stack<string> s;
  s.push("chandu"); // Only "push" function can be used becoz its stack
  s.push("chinnu");
  s.push("hrithi");
  s.push("chethu");
  s.push("unknown");

  // Cannot use Push_back(),,,Push_front(),,,,
  cout << "Top element-> " << s.top() << endl;

  s.pop();
  cout << "Top element-> " << s.top() << endl;

  cout << "size of stack " << s.size() << endl;
  cout << "stack empty? 0-> No,1->Yes " << s.empty() << endl;
}