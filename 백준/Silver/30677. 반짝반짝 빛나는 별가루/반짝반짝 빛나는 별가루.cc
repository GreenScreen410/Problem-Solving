#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long N, K, C, R;
  cin >> N >> K >> C >> R;

  vector<long long> base(K + 1), s(K + 1), p(K + 1), skill(K + 1);
  for (long long i = 1; i <= K; i++) {
    cin >> base[i];
  }
  for (long long i = 1; i <= K; i++) {
    cin >> s[i];
  }
  for (long long i = 1; i <= K; i++) {
    cin >> p[i];
  }

  long long stardust = 0, combo = 0, fatigue = 0;
  while (N--) {
    long long l;
    cin >> l;

    if (l == 0) {
      fatigue -= R;
      if (fatigue < 0) {
        fatigue = 0;
      }

      combo = 0;
      continue;
    }

    stardust += floor(base[l] * (100 + combo * C) * (100 + skill[l] * s[l]) / 10000);
    fatigue += p[l];
    skill[l]++;
    combo++;

    if (fatigue > 100) {
      stardust = -1;
      break;
    }
  }

  cout << stardust;

  return 0;
}