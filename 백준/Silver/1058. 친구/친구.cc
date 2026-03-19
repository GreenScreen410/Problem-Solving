#include <bits/stdc++.h>
using namespace std;

void floyd_warshall(auto& dist) {
  auto range = views::iota(0, (int)dist.size());
  for (int k : range) {
    for (int i : range) {
      for (int j : range) {
        dist[i][j] = min(dist[i][j], add_sat(dist[i][k], dist[k][j]));
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  const int INF = 1e9;
  vector<vector<int>> dist(n, vector<int>(n, INF));
  for (int i = 0; i < n; i++) dist[i][i] = 0;

  for (int i = 0; i < n; i++) {
    string row;
    cin >> row;
    for (int j = 0; j < n; j++) {
      if (row[j] == 'Y') dist[i][j] = 1;
    }
  }

  floyd_warshall(dist);

  int answer = 0;
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (i != j && dist[i][j] <= 2) count++;
    }
    answer = max(answer, count);
  }

  cout << answer << "\n";

  return 0;
}