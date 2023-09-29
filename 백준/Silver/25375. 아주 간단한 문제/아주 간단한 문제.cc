#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int Q;
  cin >> Q;

  while (Q--) {
    long long a, b;
    cin >> a >> b;

    if (a * 2 <= b && b % a == 0) {
      cout << "1\n";
    } else {
      cout << "0\n";
    }
  }

  return 0;
}