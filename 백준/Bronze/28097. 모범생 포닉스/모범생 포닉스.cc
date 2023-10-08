#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int time = 0;
  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;

    time += T;
    if (i != N - 1) time += 8;
  }

  cout << time / 24 << " " << time % 24;

  return 0;
}