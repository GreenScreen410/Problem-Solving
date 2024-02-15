#include <iostream>
#include <stack>
using namespace std;

int main() {
  while (true) {
    string code;
    getline(cin, code);
    if (code == ".") break;

    stack<char> s;
    bool balanced = true;
    for (int i = 0; i < code.length(); i++) {
      if (code[i] == '(' || code[i] == '{' || code[i] == '[') {
        s.push(code[i]);
      } else if (code[i] == ')') {
        if (s.empty() || s.top() != '(') {
          balanced = false;
          break;
        } else {
          s.pop();
        }
      } else if (code[i] == ']') {
        if (s.empty() || s.top() != '[') {
          balanced = false;
          break;
        } else {
          s.pop();
        }
      }
    }

    if (balanced && s.empty()) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }

  return 0;
}