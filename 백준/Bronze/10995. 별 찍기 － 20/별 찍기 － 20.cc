#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    if (i % 2 != 0) {
      for (int j = 0; j < N; j++) {
        cout << "* ";
      }
      cout << "\n";
    } else {
      for (int j = 0; j < N; j++) {
        cout << " *";
      }
      cout << "\n";
    }
  }

  return 0;
}