#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double s1, s2;
  cin >> s1 >> s2;
  
  if (ceil(s2 / 2) <= s1) {
    cout << "E";
  } else {
    cout << "H";
  }
  
  return 0;
}