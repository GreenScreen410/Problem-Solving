#include <iostream>
#include <vector>
using namespace std;

int main() {
  int K;
  cin >> K;

  vector<bool> sieve(10000001, true);
  vector<int> v;
  for (int i = 2; i <= 10000000; i++) {
    if (sieve[i] == true) {
      v.push_back(i);
      for (int j = 2 * i; j <= 10000000; j += i) {
        sieve[j] = false;
      }
    }
  }

  cout << v[K - 1];

  return 0;
}
