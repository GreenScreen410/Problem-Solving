#include <iostream>
using namespace std;

int main() {
  int g, p, t;
  cin >> g >> p >> t;

  int one = g * p;
  int group = t > 0 ? p * t + g : g;

  if (one > group) {
    cout << "2";
  } else if (one < group) {
    cout << "1";
  } else {
    cout << "0";
  }

  return 0;
}