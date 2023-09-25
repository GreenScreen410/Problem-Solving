#include <iostream>
#include <vector>
using namespace std;
#define INF 2e9

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<pair<int, int>> graph[501];
  while (M--) {
    int A, B, C;
    cin >> A >> B >> C;
    graph[A].push_back({B, C});
  }
  
  vector<long long> dist(501);
  for (int i = 1; i <= N; i++) {
    dist[i] = INF;
  }
  dist[1] = 0;
  
  bool cycle = false;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      for (int k = 0; k < graph[j].size(); k++) {
        int next = graph[j][k].first;
        int cost = graph[j][k].second;
        
        if (dist[j] != INF && dist[next] > dist[j] + cost) {
          dist[next] = dist[j] + cost;
          if (i == N) cycle = true;
        }
      }
    }
  }
  
  if (cycle) {
    cout << "-1\n";
  } else {
    for (int i = 2; i <= N; i++) {
      cout << (dist[i] != INF ? dist[i] : -1) << "\n";
    }
  }
  
  return 0;
}