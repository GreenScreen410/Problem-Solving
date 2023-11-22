#include <iostream>
#include <vector>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> dp(S.size(), 0);
  for (int i = 0; i < S.size(); i++) {
    for (int j = i; j < S.size(); j++) {
      if (S[i] == S[j]) {
        dp[j] += 1;

        for (int k = j + 1; k < S.size(); k++) {
          dp[j] += dp[k];
          dp[j] %= 10007;
        }
      }
    }
  }

  int result = 0;
  for (int i = 0; i < S.size(); i++) {
    result += dp[i];
    result %= 10007;
  }
  cout << result << "\n";

  return 0;
}