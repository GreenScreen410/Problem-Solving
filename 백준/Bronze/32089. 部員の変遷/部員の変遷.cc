#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    
    if (n == 0) break;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    int result = 0;
    for (int i = 2; i < n; i++) {
      result = max(result, a[i - 2] + a[i - 1] + a[i]);
    }
    
    cout << result << "\n";
  }
  
  return 0;
}