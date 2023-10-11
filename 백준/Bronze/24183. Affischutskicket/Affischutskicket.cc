#include <iostream>
using namespace std;

int main() {
  double C4, A3, A4;
  cin >> C4 >> A3 >> A4;

  cout.precision(6);
  cout << fixed;
  cout << (2 * C4 * 74196 + 2 * A3 * 124740 + A4 * 62370) * 0.000001;

  return 0;
}