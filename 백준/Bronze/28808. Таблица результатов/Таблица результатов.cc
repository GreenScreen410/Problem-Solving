#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int count = 0;
  while (n--) {
    string s;
    cin >> s;

    if (s.find('+') != string::npos) {
      count++;
    }
  }

  cout << count;

  return 0;
}