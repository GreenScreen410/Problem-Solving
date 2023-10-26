#include <iostream>
using namespace std;

int main() {
  int y1, m1, d1, y2, m2, d2;
  cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

  if (m2 > m1 || (m2 == m1 && d2 >= d1)) {
    cout << y2 - y1 << "\n";
  } else {
    cout << y2 - y1 - 1 << "\n";
  }
  cout << y2 - y1 + 1 << "\n";
  cout << y2 - y1;

  return 0;
}