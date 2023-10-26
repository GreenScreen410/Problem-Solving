#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }

  int m;
  cin >> m;

  while (m--) {
    int l, r;
    cin >> l >> r;

    for (int i = l; i <= r; i++) {
      cout << v[i] << "\n";
    }
  }

  return 0;
}