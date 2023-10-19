#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  while (n--) {
    double area, base;
    cin >> area >> base;
    
    cout.precision(2);
    cout << fixed;
    cout << "The height of the triangle is " << 2 * area / base << " units\n";
  }
  
  return 0;
}