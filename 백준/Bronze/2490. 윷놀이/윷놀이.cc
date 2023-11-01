#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  for (int i = 0; i < 3; i++) {
    vector<int> v(4);
    for (int j = 0; j < 4; j++) {
      cin >> v[j];
    }
    int sum = accumulate(v.begin(), v.end(), 0);

    if (sum == 0) {
      cout << "D\n";
    } else if (sum == 1) {
      cout << "C\n";
    } else if (sum == 2) {
      cout << "B\n";
    } else if (sum == 3) {
      cout << "A\n";
    } else if (sum == 4) {
      cout << "E\n";
    }
  }

  return 0;
}