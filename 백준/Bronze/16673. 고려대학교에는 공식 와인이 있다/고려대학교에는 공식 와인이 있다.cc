#include <iostream>
using namespace std;

int main() {
  int C, K, P;
  cin >> C >> K >> P;

  int collect = 0;
  for (int i = 1; i <= C; i++) {
    collect += K * i + P * i * i;
  }

  cout << collect;

  return 0;
}