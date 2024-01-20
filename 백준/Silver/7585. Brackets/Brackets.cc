#include <iostream>
#include <stack>
using namespace std;

int main() {
  while (true) {
    string code;
    getline(cin, code);
    if (code == "#") break;

    stack<char> s;
    for (int i = 0; i < code.length(); i++) {
      if (code[i] == '(' || code[i] == '{' || code[i] == '[') {
        s.push(code[i]);
      } else if (code[i] == ')') {
        if (s.empty() || s.top() != '(') {
          break;
        } else {
          s.pop();
        }
      } else if (code[i] == '}') {
        if (s.empty() || s.top() != '{') {
          break;
        } else {
          s.pop();
        }
      } else if (code[i] == ']') {
        if (s.empty() || s.top() != '[') {
          break;
        } else {
          s.pop();
        }
      }
    }

    if (s.empty()) {
      cout << "Legal\n";
    } else {
      cout << "Illegal\n";
    }
  }

  return 0;
}