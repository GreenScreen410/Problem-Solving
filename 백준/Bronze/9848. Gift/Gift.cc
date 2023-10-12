#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int count = 0;
  for (int i = 1; i < n; i++) {
    if (v[i - 1] - v[i] >= k) {
      count++;
    }
  }

  cout << count;

  return 0;
}