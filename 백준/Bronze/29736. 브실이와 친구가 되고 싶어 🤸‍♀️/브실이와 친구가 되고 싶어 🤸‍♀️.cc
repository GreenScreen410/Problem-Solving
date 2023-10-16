#include <iostream>
using namespace std;

int main() {
  int A, B, K, X;
  cin >> A >> B >> K >> X;

  int count = 0;
  for (int i = K - X; i < K + X + 1; i++) {
    if (i >= A && B >= i) {
      count++;
    }
  }

  if (count == 0) {
    cout << "IMPOSSIBLE";
  } else {
    cout << count;
  }

  return 0;
}