#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int min = 200;
  while (n--) {
    int t, l;
    cin >> t >> l;

    min > t + l ? min = t + l : min = min;
  }

  cout << min << "\n";

  return 0;
}