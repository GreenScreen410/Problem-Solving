#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    vector<int> A(10);
    for (int i = 0; i < 10; i++) {
      cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    cout << A[7] << "\n";
  }
  
  return 0;
}