#include <cmath>
#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int B = count(S.begin(), S.end(), 'B');
  int C = count(S.begin(), S.end(), 'C');
  
  cout << B / 2 + C / 2;
  
  return 0;
}