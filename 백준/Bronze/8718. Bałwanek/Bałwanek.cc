#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int x, k;
  cin >> x >> k;

  int a, b, c;
  if (7000 * k <= 1000 * x) a = 7000 * k;
  if (3500 * k <= 1000 * x) b = 3500 * k;
  if (1750 * k <= 1000 * x) c = 1750 * k;
  cout << max({a, b, c});

  return 0;
}