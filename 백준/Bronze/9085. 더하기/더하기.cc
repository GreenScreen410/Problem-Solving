#include <numeric>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    int N;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
      cin >> v[i];
    }
    cout << accumulate(v.begin(), v.end(), 0) << "\n";
  }
  
  
  return 0;
}