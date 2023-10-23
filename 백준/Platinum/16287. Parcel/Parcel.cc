#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int w, n;
  cin >> w >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  vector<bool> dp(w);
  for (int i = 0; i < n - 2; i++) {
    for (int j = 0; j < i; j++) {
      dp[a[i] + a[j]] = true;
    }
    for (int j = i + 2; j < n; j++) {
      int t = w - a[i + 1] - a[j];
      if (t < 0) break;
      if (t <= w + 1 && dp[t]) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";

  return 0;
}