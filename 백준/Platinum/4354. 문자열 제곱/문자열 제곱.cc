#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (1) {
    string s;
    cin >> s;

    if (s == ".") break;

    vector<int> table(s.size() + 1);
    int j = 0;
    for (int i = 1; i < s.size(); i++) {
      while (s[j] != s[i] && j > 0) {
        j = table[j - 1];
      }
      if (s[i] == s[j]) {
        table[i] = ++j;
      }
    }

    if (s.size() % (s.size() - table[s.size() - 1]) != 0) {
      cout << "1\n";
    } else {
      cout << s.size() / (s.size() - table[s.size() - 1]) << "\n";
    }
  }

  return 0;
}