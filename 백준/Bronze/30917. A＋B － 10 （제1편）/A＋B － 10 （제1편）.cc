#include <iostream>
using namespace std;

int main() {
  for (int A = 1; A <= 9; A++) {
    cout << "? A " << A << endl;

    int response;
    cin >> response;

    if (response == 1) {
      for (int B = 1; B <= 9; B++) {
        cout << "? B " << B << endl;

        int response;
        cin >> response;

        if (response == 1) {
          cout << "! " << A + B;
          break;
        }
      }
    }
  }

  return 0;
}