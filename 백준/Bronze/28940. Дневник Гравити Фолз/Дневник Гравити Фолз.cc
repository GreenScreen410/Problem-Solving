#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int w, h, n, a, b;
  cin >> w >> h >> n >> a >> b;

  if (a > w || b > h) {
    cout << "-1";
    return 0;
  }

  cout << ceil((double)n / ((w / a) * (h / b)));

  return 0;
}