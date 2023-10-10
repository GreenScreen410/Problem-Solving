#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (1) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    vector<bool> sieve(n * 2 + 1, true);
    for (int i = 2; i <= n * 2; i++) {
      if (sieve[i] == true) {
        for (int j = i * 2; j <= n * 2; j += i) {
          sieve[j] = false;
        }
      }
    }

    int count = 0;
    for (int i = n + 1; i <= n * 2; i++) {
      if (sieve[i] == true) {
        count++;
      }
    }

    cout << count << "\n";
  }

  return 0;
}
