#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> f(n);
  f[0] = 1;
  f[1] = 1;
  f[2] = 1;
  for (int i = 3; i < n; i++) {
    f[i] = f[i - 1] + f[i - 3];
  }

  cout << f[n - 1];

  return 0;
}