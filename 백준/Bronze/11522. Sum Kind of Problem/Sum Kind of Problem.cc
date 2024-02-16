#include <iostream>
using namespace std;

int main() {
  int P;
  cin >> P;
  
  while (P--) {
    int K, N;
    cin >> K >> N;
    
    int S1 = N * (N + 1) / 2;
    int S2 = N * N;
    int S3 = S2 + N;
    
    cout << K << " " << S1 << " " << S2 << " " << S3 << "\n";
  }
  
  return 0;
}