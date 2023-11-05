#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  for (int i = 1; i <= N * M; i++) {
    if (i % M == 0) {
      cout << i << "\n";
    } else {
      cout << i << " ";
    }
  }

  return 0;
}