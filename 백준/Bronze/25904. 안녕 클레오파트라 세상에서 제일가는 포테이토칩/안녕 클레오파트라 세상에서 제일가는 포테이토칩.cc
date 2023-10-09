#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> T(N);
  for (int i = 0; i < N; i++) {
    cin >> T[i];
  }

  for (int i = 0;; i++) {
    if (i > N - 1) i = 0;
    if (T[i] < X) {
      cout << i + 1;
      break;
    }
    X++;
  }

  return 0;
}