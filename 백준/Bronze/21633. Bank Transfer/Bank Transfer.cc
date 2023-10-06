#include <iostream>
using namespace std;

int main() {
  double k;
  cin >> k;

  cout.precision(2);
  cout << fixed;

  if (25 + k / 100 >= 2000.0) {
    cout << "2000.00";
  } else if (25 + k / 100 <= 100.0) {
    cout << "100.00";
  } else {
    cout << 25 + k / 100;
  }

  return 0;
}