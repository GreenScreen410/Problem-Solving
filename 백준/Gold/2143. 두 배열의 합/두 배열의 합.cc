#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int T, n;
  cin >> T >> n;

  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int m;
  cin >> m;

  vector<int> B(m);
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }

  vector<int> A_sum, B_sum;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += A[j];
      A_sum.push_back(sum);
    }
  }

  for (int i = 0; i < m; i++) {
    int sum = 0;
    for (int j = i; j < m; j++) {
      sum += B[j];
      B_sum.push_back(sum);
    }
  }

  sort(B_sum.begin(), B_sum.end());

  long long answer = 0;
  for (int i = 0; i < A_sum.size(); i++) {
    auto right = upper_bound(B_sum.begin(), B_sum.end(), T - A_sum[i]);
    auto left = lower_bound(B_sum.begin(), B_sum.end(), T - A_sum[i]);
    answer += right - left;
  }

  cout << answer;

  return 0;
}