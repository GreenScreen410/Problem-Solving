#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  
  if (A < 0) {
    cout << abs(A) * C + D + B * E;
  } else {
    cout << (B - A) * E;
  }
  
  return 0;
}