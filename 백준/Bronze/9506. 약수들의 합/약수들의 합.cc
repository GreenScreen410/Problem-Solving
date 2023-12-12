#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  while (1) {
    int n;
    cin >> n;

    if (n == -1) break;

    vector<int> divisor;
    for (int i = 1; i < n; i++) {
      if (n % i == 0) divisor.push_back(i);
    }

    int sum = accumulate(divisor.begin(), divisor.end(), 0);
    if (sum == n) {
      cout << n << " = ";
      for (int i = 0; i < divisor.size(); i++) {
        cout << divisor[i];
        if (i != divisor.size() - 1) cout << " + ";
      }
      cout << "\n";
    } else {
      cout << n << " is NOT perfect.\n";
    }
  }

  return 0;
}