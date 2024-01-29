#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int g;
    cin >> g;

    vector<int> group(g);
    for (int i = 0; i < g; i++) {
      cin >> group[i];
    }

    for (int i = 1; i < g; i++) {
      if (group[i] != group[i - 1] + 1) {
        cout << i + 1 << "\n";
        break;
      }
    }
  }

  return 0;
}