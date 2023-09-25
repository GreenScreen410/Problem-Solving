#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  int result = accumulate(v.begin(), v.end(), 0);
  if (result < 0) {
    cout << "Left";
  } else if (result == 0) {
    cout << "Stay";
  } else {
    cout << "Right";
  }
  
  return 0;
}