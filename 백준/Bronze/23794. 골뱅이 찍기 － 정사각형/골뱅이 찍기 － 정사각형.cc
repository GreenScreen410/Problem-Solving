#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N + 2; i++) {
    cout << "@";
  }
  cout << "\n";
  for (int i = 0; i < N; i++) {
    cout << "@";
    for (int j = 0; j < N; j++) {
      cout << " ";
    }
    cout << "@\n";
  }
  for (int i = 0; i < N + 2; i++) {
    cout << "@";
  }

  return 0;
}