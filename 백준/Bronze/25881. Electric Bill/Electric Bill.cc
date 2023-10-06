#include <iostream>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  for (int i = 0; i < n; i++) {
    int energy;
    cin >> energy;

    int fee;
    if (energy >= 1000) {
      cout << energy << " " << 1000 * a + (energy - 1000) * b << "\n";
    } else {
      cout << energy << " " << energy * a << "\n";
    }
  }

  return 0;
}