#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;

  int X = ceil(N / A) * B;
  int Y = ceil(N / C) * D;
  cout << min(X, Y);

  return 0;
}