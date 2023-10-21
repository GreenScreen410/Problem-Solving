#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int size = 0;
  while (n--) {
    int h, w;
    cin >> h >> w;
    size = max(size, h * w);
  }

  cout << size;

  return 0;
}