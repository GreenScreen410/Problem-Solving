#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      sum += a[j];
    }
    
    if (sum == a[i]) {
      cout << i + 1;
      break;
    }
  }
  
  return 0;
}