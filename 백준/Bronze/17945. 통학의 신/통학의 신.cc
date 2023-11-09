#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int plus = -A + sqrt(A * A - B);
  int minus = -A - sqrt(A * A - B);

  if (plus == minus) {
    cout << plus;
  } else {
    cout << minus << " " << plus;
  }

  return 0;
}