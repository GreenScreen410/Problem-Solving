#include <iostream>
using namespace std;

int main() {
  int N, H;
  cin >> N >> H;

  int count = 0;
  while (N--) {
    int A;
    cin >> A;

    if (A <= H) {
      count++;
    }
  }

  cout << count;

  return 0;
}