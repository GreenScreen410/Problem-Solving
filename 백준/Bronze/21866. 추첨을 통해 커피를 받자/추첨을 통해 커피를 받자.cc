#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  vector<int> v(9);
  for (int i = 0; i < 9; i++) {
    cin >> v[i];

    if (v[i] > 100 && v[i] % 100 != 0) {
      cout << "hacker";
      return 0;
    }
  }

  int sum = accumulate(v.begin(), v.end(), 0);
  if (sum < 100) {
    cout << "none";
  } else {
    cout << "draw";
  }

  return 0;
}