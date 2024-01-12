#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];

    if (i >= 1 && A[i] - A[i - 1] != A[1] - A[0]) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  for (int i = 0; i < N; i++) {
    cout << A[i] << " ";
  }
  cout << "\n";
  for (int i = 0; i < N; i++) {
    cout << "0 ";
  }

  return 0;
}