#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  vector<int> C;
  C.insert(C.begin(), A.begin(), A.end());
  C.insert(C.begin(), B.begin(), B.end());
  sort(C.begin(), C.end());

  for (int i = 0; i < C.size(); i++) {
    cout << C[i] << " ";
  }
  
  return 0;
}