#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int i = 1; i <= T; i++) {
    int A, B;
    cin >> A >> B;

    int count = floor(cbrt(B)) - floor(cbrt(A - 1));
    cout << "Case #" << i << ": " << count << "\n";
  }

  return 0;
}