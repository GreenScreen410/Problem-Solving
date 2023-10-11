#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int count = 1, one = 0;
    while (1) {
      one = one * 10 + 1;

      if (one % n == 0) break;
      one %= n;
      count++;
    }
    cout << count << "\n";
  }

  return 0;
}