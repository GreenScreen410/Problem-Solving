#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    string A, B;
    cin >> A >> B;

    bool isSame = true;
    for (int i = 0; i < A.size(); i++) {
      if (A[i] != B[i]) {
        isSame = false;
        break;
      }
    }

    if (isSame) {
      cout << "OK\n";
    } else {
      cout << "ERROR\n";
    }
  }

  return 0;
}