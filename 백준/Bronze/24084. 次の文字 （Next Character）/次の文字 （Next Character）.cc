#include <iostream>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  
  for (int i = 1; i < N; i++) {
    if (S[i] == 'J') {
      cout << S[i - 1] << "\n";
    }
  }
  
  return 0;
}