#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  while (K--) {
    int A;
    cin >> A;

    N -= ((A + 1) / 2);
  }

  if (N <= 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}