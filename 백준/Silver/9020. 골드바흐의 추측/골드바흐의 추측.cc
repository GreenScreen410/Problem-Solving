#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    vector<bool> sieve(10000 + 1, true);
    for (int i = 2; i <= sqrt(10000); i++) {
      if (sieve[i] == true) {
        for (int j = i * 2; j <= 10000; j += i) {
          sieve[j] = false;
        }
      }
    }

    for (int i = n / 2; i > 0; i--) {
      if (sieve[i] == true && sieve[n - i] == true) {
        cout << i << " " << n - i << "\n";
        break;
      }
    }
  }

  return 0;
}
