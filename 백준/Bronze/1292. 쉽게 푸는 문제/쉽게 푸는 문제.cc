#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  vector<int> v;
  for (int i = 1; i <= 45; i++) {
    for (int j = 0; j < i; j++) {
      v.push_back(i);
    }
  }

  int sum = accumulate(v.begin() + A - 1, v.begin() + B, 0);
  cout << sum;

  return 0;
}