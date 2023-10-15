#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  if (N > M) swap(N, M);
  cout << min(N + M, N + N + 1);
  
  return 0;
}