#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int d;
    cin >> d;

    vector<int> v(d);
    for (int i = 0; i < d; i++) {
      cin >> v[i];
    }

    cout << "Denominations: ";
    for (int i = 0; i < d; i++) {
      cout << v[i] << " ";
    }
    cout << "\n";

    bool isGood = true;
    for (int i = 1; i < d; i++) {
      if (v[i] < 2 * v[i - 1]) {
        isGood = false;
        break;
      }
    }

    if (isGood) {
      cout << "Good coin denominations!\n\n";
    } else {
      cout << "Bad coin denominations!\n\n";
    }
  }

  return 0;
}