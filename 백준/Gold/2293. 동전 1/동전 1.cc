#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;
  
  vector<int> dp(10000);
  vector<int> arr(100);
  dp[0] = 1;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      if (j - arr[i] >= 0) {
        dp[j] += dp[j - arr[i]];
      }
    }
  }

  cout << dp[k];

  return 0;
}
