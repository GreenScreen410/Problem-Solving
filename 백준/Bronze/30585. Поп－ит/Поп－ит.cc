#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int zero = 0, one = 0;
  while (h--) {
    string s;
    cin >> s;

    zero += count(s.begin(), s.end(), '1');
    one += count(s.begin(), s.end(), '0');
  }

  cout << min(zero, one);

  return 0;
}