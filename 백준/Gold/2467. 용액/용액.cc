#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  int sum = INT_MAX;
  int left = 0, right = N - 1;
  int a, b;

  while (left < right) {
    int x = v[left] + v[right];
    if (abs(x) < sum) {
      sum = abs(x);
      a = v[left];
      b = v[right];
    }

    if (x < 0) {
      left++;
    } else {
      right--;
    }
  }

  cout << a << " " << b;

  return 0;
}