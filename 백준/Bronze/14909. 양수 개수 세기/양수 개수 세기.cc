#include <iostream>
using namespace std;

int main() {
  int N, count = 0;
  while (cin >> N) {
    if (N > 0) {
      count++;
    }
  }

  cout << count;

  return 0;
}