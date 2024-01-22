#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> friends(N + 1);
  while (M--) {
    int A, B;
    cin >> A >> B;
    friends[A]++;
    friends[B]++;
  }

  for (int i = 1; i <= N; i++) {
    cout << friends[i] << "\n";
  }

  return 0;
}