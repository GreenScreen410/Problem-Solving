#include <iostream>
using namespace std;

int main() {
  string encrypt;
  cin >> encrypt;

  string decrypt;
  int index = 0;
  while (1) {
    if (index == encrypt.size() - 1) break;
    decrypt += encrypt[index];
    index += encrypt[index] - 'A' + 1;
  }

  decrypt += encrypt[encrypt.size() - 1];
  cout << decrypt;

  return 0;
}