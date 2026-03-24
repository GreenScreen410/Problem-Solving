#include <bits/stdc++.h>
#include <ext/rope>
using namespace std;
using namespace __gnu_cxx;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<int> L(N);
  for (int& i : L) cin >> i;

  int S = N + M + 5;
  rope<int> arr;
  for (int i = 0; i < S; i++) arr.push_back(0);

  set<int> empty;
  for (int i = 1; i <= S; i++) empty.insert(i);

  int W = 0;
  for (int i = 0; i < N; i++) {
    int l = L[i];
    auto it = empty.lower_bound(l);
    int p = *it;
    rope<int> one;
    one.push_back(i + 1);
    arr = arr.substr(0, l - 1) + one + arr.substr(l - 1, p - l) + arr.substr(p, S - p);

    empty.erase(it);
    W = max(W, p);
  }

  cout << W << "\n";
  for (int i = 0; i < W; i++) cout << arr[i] << " ";
  cout << "\n";

  return 0;
}