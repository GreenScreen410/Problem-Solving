#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    vector<pair<int, int>> pairs;
    for (int a = 1; a <= n; a++) {
      for (int b = a + 1; b <= n; b++) {
        if (a + b == n) {
          pairs.push_back({a, b});
        }
      }
    }

    cout << "Pairs for " << n << ": ";
    for (int i = 0; i < pairs.size(); i++) {
      cout << pairs[i].first << " " << pairs[i].second;
      if (i != pairs.size() - 1) {
        cout << ", ";
      }
    }
    cout << "\n";
  }

  return 0;
}