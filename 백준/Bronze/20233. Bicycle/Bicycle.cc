#include <iostream>
using namespace std;

int main() {
  int a, x, b, y, T;
  cin >> a >> x >> b >> y >> T;

  if (T > 30) {
    cout << a + (T - 30) * x * 21 << " ";
  } else {
    cout << a << " ";
  }

  if (T > 45) {
    cout << b + (T - 45) * y * 21;
  } else {
    cout << b;
  }

  return 0;
}