#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (1) {
    int n;
    cin >> n;

    if (n == 0) break;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--) {
      cout << v[i] << "\n";
    }
    cout << "0\n";
  }

  return 0;
}