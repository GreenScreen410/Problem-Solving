#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m, n || m) {
    int r = n - m;
    if (r >= 3 && r % 2) cout << (r - 3) / 2 << " 1\n";
    else cout << r / 2 << " 0\n";
  }

  return 0;
}