#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;

    cout << a << " " << b << " " << c << "\n";
    if (a >= 10 && b >= 10 && c >= 10) {
      cout << "triple-double" << endl;
    } else if ((a >= 10 && b >= 10) || (a >= 10 && c >= 10) || (b >= 10 && c >= 10)) {
      cout << "double-double" << endl;
    } else if (a >= 10 || b >= 10 || c >= 10) {
      cout << "double" << endl;
    } else {
      cout << "zilch" << endl;
    }
    cout << endl;
  }

  return 0;
}