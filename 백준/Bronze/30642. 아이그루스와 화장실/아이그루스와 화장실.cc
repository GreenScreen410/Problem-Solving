#include <iostream>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> S >> K;

  if (S == "annyong") {
    if (K % 2 == 1) {
      cout << K;
    } else {
      if (K == N) {
        cout << K - 1;
      } else {
        cout << K + 1;
      }
    }
  }

  else {
    if (K % 2 == 0) {
      cout << K;
    } else {
      if (K == N) {
        cout << K - 1;
      } else {
        cout << K + 1;
      }
    }
  }

  return 0;
}