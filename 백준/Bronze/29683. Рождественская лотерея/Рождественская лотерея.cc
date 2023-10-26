#include <iostream>
using namespace std;

int main() {
  int n, A;
  cin >> n >> A;

  int count = 0;
  while (n--) {
    int a;
    cin >> a;

    count += a / A;
  }

  cout << count;

  return 0;
}