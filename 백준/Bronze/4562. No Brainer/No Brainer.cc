#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int X, Y;
    cin >> X >> Y;

    if (X >= Y) {
      cout << "MMM BRAINS\n";
    } else {
      cout << "NO BRAINS\n";
    }
  }

  return 0;
}