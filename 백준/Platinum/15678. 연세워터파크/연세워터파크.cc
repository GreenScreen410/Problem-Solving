#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;

  vector<long long> K(N);
  for (int i = 0; i < N; i++) {
    cin >> K[i];
  }

  vector<long long> dp = K;
  deque<pair<long long, long long>> dq;
  for (int i = 0; i < N; i++) {
    while (!dq.empty() && dq.front().first < i - D) {
      dq.pop_front();
    }

    if (!dq.empty()) {
      dp[i] = max(dp[i], dq.front().second + K[i]);
    }

    while (!dq.empty() && dq.back().second < dp[i]) {
      dq.pop_back();
    }
    dq.push_back({i, dp[i]});
  }

  cout << *max_element(dp.begin(), dp.end());

  return 0;
}