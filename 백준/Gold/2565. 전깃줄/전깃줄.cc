#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> wire;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A >> B;
    wire.push_back({A, B});
  }
  sort(wire.begin(), wire.end());

  vector<int> dp(100);
  int amount = 0;
  for (int i = 0; i < N; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (wire[i].second > wire[j].second) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    amount = max(amount, dp[i]);
  }

  cout << N - amount;

  return 0;
}