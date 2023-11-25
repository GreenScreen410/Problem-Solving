#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    double N;
    string unit;

    cin >> N >> unit;

    cout.precision(4);
    cout << fixed;
    if (unit == "kg") {
      cout << N * 2.2046 << " lb\n";
    } else if (unit == "l") {
      cout << N * 0.2642 << " g\n";
    } else if (unit == "lb") {
      cout << N * 0.4536 << " kg\n";
    } else if (unit == "g") {
      cout << N * 3.7854 << " l\n";
    }
  }

  return 0;
}