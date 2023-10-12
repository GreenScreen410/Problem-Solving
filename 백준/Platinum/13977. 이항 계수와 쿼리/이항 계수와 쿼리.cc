#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007

long long power(long long a, long long b) {
  if (b == 1) return a % MOD;
  else if (b % 2) return power(a, b - 1) * a % MOD;
  else return power(a * a % MOD, b / 2);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  vector<long long> v = {1};
  for (int i = 1; i <= 4000000; i++) {
    v.push_back(v[i - 1] * i % MOD);
  }

  int M;
  cin >> M;
  while (M--) {
    int N, K;
    cin >> N >> K;
    cout << v[N] * power(v[N - K] * v[K] % MOD, MOD - 2) % MOD << "\n";
  }

  return 0;
}
