#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> C(N);
  int jinju = 0;
  for (int i = 0; i < N; i++) {
    string D;
    cin >> D >> C[i];
    
    if (D == "jinju") jinju = C[i];
  }
  
  int count = 0;
  for (int i = 0; i < N; i++) {
    if (C[i] > jinju) count++;
  }
  
  cout << jinju << "\n" << count;
  
  return 0;
}