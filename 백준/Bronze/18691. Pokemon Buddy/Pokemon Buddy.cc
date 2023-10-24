#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int G, C, E;
    cin >> G >> C >> E;

    if (E - C < 0) {
      cout << "0\n";
    } else if (G == 1) {
      cout << E - C << "\n";
    } else if (G == 2) {
      cout << (E - C) * 3 << "\n";
    } else {
      cout << (E - C) * 5 << "\n";
    }
  }

  return 0;
}