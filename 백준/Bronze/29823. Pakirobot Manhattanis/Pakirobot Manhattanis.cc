#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  string move;
  cin >> move;

  int n = 0, e = 0, s = 0, w = 0;
  for (int i = 0; i < N; i++) {
    if (move[i] == 'N') {
      n++;
    } else if (move[i] == 'E') {
      e++;
    } else if (move[i] == 'S') {
      s++;
    } else {
      w++;
    }
  }

  cout << max(n, s) - min(n, s) + max(e, w) - min(e, w);

  return 0;
}