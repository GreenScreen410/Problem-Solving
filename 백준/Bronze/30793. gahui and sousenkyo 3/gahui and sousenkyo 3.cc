#include <iostream>
using namespace std;

int main() {
  double p, r;
  cin >> p >> r;

  double v = p / r;
  if (v < 0.2) {
    cout << "weak";
  } else if (0.2 <= v && v < 0.4) {
    cout << "normal";
  } else if (0.4 <= v && v < 0.6) {
    cout << "strong";
  } else {
    cout << "very strong";
  }

  return 0;
}