#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> x(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i];
  }
  sort(x.begin(), x.end());

  int score = 0;
  int group_min = x[0];
  for (int i = 1; i < N; i++) {
    if (x[i] - x[i - 1] != 1) {
      score += group_min;
      group_min = x[i];
    } else {
      group_min = min(group_min, x[i]);
    }
  }
  score += group_min;

  cout << score;

  return 0;
}