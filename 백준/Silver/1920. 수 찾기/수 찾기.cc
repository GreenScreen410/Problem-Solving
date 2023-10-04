#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  int M;
  cin >> M;

  for (int i = 0; i < M; i++) {
    int X;
    cin >> X;

    cout << binary_search(A.begin(), A.end(), X) << "\n";
  }

  return 0;
}