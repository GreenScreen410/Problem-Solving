#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int c, p;
    cin >> c >> p;

    cout << c << " " << p << "\n";
    cout << (c - 1) * (p - 2) + p << "\n";
  }

  return 0;
}