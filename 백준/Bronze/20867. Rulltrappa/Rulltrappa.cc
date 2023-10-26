#include <iostream>
using namespace std;

int main() {
  double M, S, G, A, B, L, R;
  cin >> M >> S >> G >> A >> B >> L >> R;

  double left = (L / A) + (M / G);
  double right = (R / B) + (M / S);

  if (left > right) {
    cout << "latmask";
  } else {
    cout << "friskus";
  }

  return 0;
}