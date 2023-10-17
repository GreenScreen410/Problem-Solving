#include <iostream>
using namespace std;

int main() {
  int p1, p2, p3, p4, x, y, r;
  cin >> p1 >> p2 >> p3 >> p4 >> x >> y >> r;
  
  if (p1 == x) {
    cout << "1";
  } else if (p2 == x) {
    cout << "2";
  } else if (p3 == x) {
    cout << "3";
  } else if (p4 == x) {
    cout << "4";
  } else {
    cout << "0";
  }
  
  return 0;
}