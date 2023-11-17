#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (1) {
    int n0;
    cin >> n0;

    if (n0 == 0) {
      break;
    }

    int n1 = 3 * n0;
    int n2;
    if (n1 % 2 == 0) {
      n2 = n1 / 2;
    } else {
      n2 = (n1 + 1) / 2;
    }

    int n3 = 3 * n2;
    int n4 = n3 / 9;

    cout << i << ". ";
    if (n1 % 2 == 0) {
      cout << "even ";
    } else {
      cout << "odd ";
    }
    cout << n4 << "\n";

    i++;
  }

  return 0;
}