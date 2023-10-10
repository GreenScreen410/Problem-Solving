#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vector<bool> sieve(1000000 + 1, true);
  for (int i = 2; i <= sqrt(1000000); i++) {
    if (sieve[i] == true) {
      for (int j = i * 2; j <= 1000000; j += i) {
        sieve[j] = false;
      }
    }
  }

  while (1) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    bool flag = false;
    for (int i = 3; i <= n / 2; i += 2) {
      if (sieve[i] == true && sieve[n - i] == true) {
        flag = true;
        cout << n << " = " << i << " + " << n - i << "\n";
        break;
      }
    }

    if (flag == false) {
      cout << "Goldbach's conjecture is wrong.\n";
    }
  }

  return 0;
}
