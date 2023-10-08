#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int score = 0;
  while (N--) {
    int a, d, g;
    cin >> a >> d >> g;

    if (a == (d + g)) {
      score = max(score, 2 * a * (d + g));
    } else {
      score = max(score, a * (d + g));
    }
  }

  cout << score;

  return 0;
}