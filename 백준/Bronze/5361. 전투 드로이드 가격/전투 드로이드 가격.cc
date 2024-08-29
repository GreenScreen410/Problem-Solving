#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    
    cout.precision(2);
    cout << fixed;
    cout << "$" << A * 350.34 + B * 230.90 + C * 190.55 + D * 125.30 + E * 180.90 << "\n";
  }
  
  return 0;
}