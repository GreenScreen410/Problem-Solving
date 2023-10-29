#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v(10);
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    cin >> v[i];
    sum += v[i];
  }

  for (int i = 0; i < 10; i++) {
    if (sum - v[i] == v[i]) {
      cout << v[i];
      break;
    }
  }

  return 0;
}