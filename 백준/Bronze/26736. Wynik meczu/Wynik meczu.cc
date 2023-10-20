#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  int A = 0, B = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'A') A++;
    else B++;
  }

  cout << A << " : " << B;
  
  return 0;
}