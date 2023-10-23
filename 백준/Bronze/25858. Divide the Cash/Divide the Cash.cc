#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int sum = accumulate(v.begin(), v.end(), 0);
  int reward = d / sum;

  for (int i = 0; i < n; i++) {
    cout << v[i] * reward << "\n";
  }

  return 0;
}