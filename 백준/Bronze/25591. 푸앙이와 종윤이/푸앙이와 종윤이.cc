#include <iostream>
using namespace std;

int main() {
  int i, j;
  cin >> i >> j;

  int a = 100 - i;
  int b = 100 - j;
  int c = 100 - (a + b);
  int d = a * b;
  int q = d / 100;
  int r = d % 100;
  cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n";
  cout << c + q << " " << r;

  return 0;
}