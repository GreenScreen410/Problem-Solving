#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N, L;
  cin >> N >> L;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  deque<pair<int, int>> dq;
  for (int i = 0; i < N; i++) {
    if (!dq.empty() && i == dq.front().second + L) {
      dq.pop_front();
    }

    while (!dq.empty() && dq.back().first > A[i]) {
      dq.pop_back();
    }

    dq.push_back({A[i], i});
    cout << dq.front().first << " ";
  }
}