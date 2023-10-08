#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    for (int x = 1; x <= a; x++) {
      for (int y = 1; y <= b; y++) {
        for (int z = 1; z <= c; z++) {
          if ((x % y == y % z) && (y % z == z % x)) {
            count++;
          }
        }
      }
    }

    cout << count << "\n";
  }

  return 0;
}