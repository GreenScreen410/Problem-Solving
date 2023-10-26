#include <iostream>
using namespace std;

int main() {
  int ds, ys, dm, ym;
  cin >> ds >> ys >> dm >> ym;

  int sun = ys - ds;
  int moon = ym - dm;
  while (sun != moon) {
    if (sun < moon) {
      sun += ys;
    } else {
      moon += ym;
    }
  }

  cout << sun;

  return 0;
}