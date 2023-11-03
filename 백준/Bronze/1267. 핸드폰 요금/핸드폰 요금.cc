#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  int N, m = 0, y = 0;
  for (int i = 0; i < T; i++) {
    cin >> N;
    y += (N / 30 + 1) * 10;
    m += (N / 60 + 1) * 15;
  }

  if (m < y) {
    cout << "M " << m;
  } else if (m > y) {
    cout << "Y " << y;
  } else {
    cout << "Y M " << m;
  }

  return 0;
}