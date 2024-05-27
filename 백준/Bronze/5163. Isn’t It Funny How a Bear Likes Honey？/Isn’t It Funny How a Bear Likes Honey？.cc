#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int K;
  cin >> K;
  
  for (int i = 1; i <= K; i++) {
    double b, w;
    cin >> b >> w;
    
    double result = 0;
    for (int j = 1; j <= b; j++) {
      double r;
      cin >> r;
      result += 4.0 / 3.0 * M_PI * pow(r, 3) / 1000;
    }
    
    cout << "Data Set " << i << ":\n";
    if (result >= w) {
      cout << "Yes\n\n";
    } else {
      cout << "No\n\n";
    }
  }
}