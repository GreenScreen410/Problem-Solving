#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  for (int i = 65; i <= 90; i++) {
    if (find(S.begin(), S.end(), (char)i) == S.end()) {
      cout << (char)i;
    }
  }
  
  return 0;
}