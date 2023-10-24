#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int a, b, count;
    cin >> a >> b >> count;

    cout << "Data set: " << a << " " << b << " " << count << "\n";
    while (count--) {
      if (a > b) {
        a /= 2;
      } else {
        b /= 2;
      }
    }

    cout << max(a, b) << " " << min(a, b) << "\n\n";
  }

  return 0;
}