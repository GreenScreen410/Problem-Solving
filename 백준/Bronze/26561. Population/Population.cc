#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int p, t;
    cin >> p >> t;

    cout << p - t / 7 + t / 4 << "\n";
  }

  return 0;
}