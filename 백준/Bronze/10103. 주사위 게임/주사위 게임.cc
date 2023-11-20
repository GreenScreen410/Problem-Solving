#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int changyeong = 100, sangdeok = 100;
  while (n--) {
    int a, b;
    cin >> a >> b;
  
    if (a > b) {
      sangdeok -= a;
    } else if (a < b) {
      changyeong -= b;
    }
  }

  cout << changyeong << "\n" << sangdeok << "\n";

  return 0;
}