#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

unsigned long long pow(__int128 b, __int128 e, __int128 mod) {
  __int128 result = 1;
  while (e > 0) {
    if (e % 2 == 1) result = (result * b) % mod;
    b = (b * b) % mod;
    e /= 2;
  }
  return result;
}

unsigned long long gcd(unsigned long long a, unsigned long long b) {
  while (b != 0) {
    unsigned long long t = b;
    b = a % b;
    a = t;
  }
  return a;
}

__int128 abs128(__int128 x) {
  return x < 0 ? -x : x;
  }

unsigned long long miller_rabin(unsigned long long n) {
  for (unsigned long long a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
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

unsigned long long pollard_rho(long long n) {
  if (miller_rabin(n)) return n;
  if (n == 1) return 1;
  if (n % 2 == 0) return 2;

  __int128 x = rand(), y = x, c = rand(), d = 1;

  while (d == 1) {
    x = (x * x % n + c + n) % n;
    y = (y * y % n + c + n) % n;
    y = (y * y % n + c + n) % n;
    d = gcd(abs128(x - y), n);
    if (d == n) return pollard_rho(n);
  }
  return (miller_rabin(d)) ? d : pollard_rho(d);
}

unsigned long long euler_phi(unsigned long long n, const vector<unsigned long long>& factors) {
  unsigned long long answer = n / factors[0] * (factors[0] - 1);
  for (int i = 1; i < factors.size(); i++) {
    if (factors[i - 1] != factors[i]) {
      answer = answer / factors[i] * (factors[i] - 1);
    }
  }
  return answer;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  unsigned long long n, original;
  cin >> n;
  original = n;

  if (n == 1) {
    cout << 1;
    return 0;
  }

  vector<unsigned long long> factors;
  while (n > 1) {
    unsigned long long factor = pollard_rho(n);
    factors.push_back(factor);
    n /= factor;
  }
  sort(factors.begin(), factors.end());

  cout << euler_phi(original, factors);

  return 0;
}