#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double L;
  cin >> L;

  cout << fixed;
  cout.precision(14);
  cout << L * L * sqrt(3) / 4;

  return 0;
}