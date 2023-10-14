#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double S, A, B;
  cin >> S >> A >> B;

  int price = 250;
  if (S <= A) {
    cout << price;
  } else {
    cout << price + 100 * ceil((S - A) / B);
  }

  return 0;
}