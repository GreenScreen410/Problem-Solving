#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  if (N == 1) {
    cout << "1";
    return 0;
  }
  
  int power = 1;
  for (int i = 0; i < 30; i++) {
    power *= 2;
    if (power == N) {
      cout << "1";
      return 0;
    }
  }
  
  cout << "0";
  
  return 0;
}