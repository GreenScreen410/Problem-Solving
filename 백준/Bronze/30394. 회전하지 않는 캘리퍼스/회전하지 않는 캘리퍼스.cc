#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int m = 1e9, M = -1e9;
  while (N--) {
    int x, y;
    cin >> x >> y;
    m = min(m, y);
    M = max(M, y);
  }
  
  cout << M - m;

  return 0;
}