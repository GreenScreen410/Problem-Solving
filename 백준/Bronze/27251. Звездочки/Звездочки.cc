#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i * i; j++) {
      if (j > 100) {
        cout << "...";
        break;
      } else {
        cout << "*";
      }
    }
    cout << "\n";
  }

  return 0;
}