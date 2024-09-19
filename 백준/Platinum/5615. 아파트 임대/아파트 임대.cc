#include <iostream>
#include <vector>
using namespace std;

unsigned long long pow(unsigned long long b, unsigned long long e, unsigned long long mod) {
  unsigned long long result = 1;
  while (e > 0) {
    if (e % 2 == 1) result = (result * b) % mod;
    b = (b * b) % mod;
    e /= 2;
  }
  return result;
}

unsigned long long miller_rabin(unsigned long long n) {
  if (n < 2) return 0;
  vector<unsigned long long> a_list = {2, 7, 61};
  for (unsigned long long a : a_list) {
    if (n % a == 0) return n == a;
    unsigned long long d = n - 1;
    while (d % 2 == 0) {
      if (pow(a, d, n) == n - 1) break;
      d /= 2;
    }
    if (pow(a, d, n) != 1 && pow(a, d, n) != n - 1) return 0;
  }
  return 1;
}

int main() {
  int N;
  cin >> N;

  int count = 0;
  while (N--) {
    unsigned long long size;
    cin >> size;

    if (miller_rabin(2 * size + 1)) count++;
  }

  cout << count;

  return 0;
}