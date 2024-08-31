#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  
  int count = 0;
  while (n--) {
    int xi, yi;
    cin >> xi >> yi;
    
    if (hypot(xi - x, yi - y) > k) count++;
  }
  
  cout << count;
  
  return 0;
}