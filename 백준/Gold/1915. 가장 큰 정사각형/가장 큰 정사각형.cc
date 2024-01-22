#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<char>> v(N + 1, vector<char>(M + 1));
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      cin >> v[i][j];
    }
  }

  vector<vector<int>> dp(N + 1, vector<int>(M + 1));
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      if (v[i][j] == '1') {
        dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
      }
    }
  }

  int length = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      if (length < dp[i][j]) {
        length = dp[i][j];
      }
    }
  }

  cout << length * length;

  return 0;
}