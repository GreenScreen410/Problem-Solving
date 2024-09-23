#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph(100001);
vector<int> visited(100001);

int dfs(int node) {
  visited[node] = 1;

  for (int i : graph[node]) {
    if (!visited[i]) {
      visited[node] += dfs(i);
    }
  }

  return visited[node];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N, R, Q;
  cin >> N >> R >> Q;

  for (int i = 0; i < N - 1; i++) {
    int U, V;
    cin >> U >> V;
    graph[U].push_back(V);
    graph[V].push_back(U);
  }

  dfs(R);

  for (int i = 0; i < Q; i++) {
    int U;
    cin >> U;
    cout << visited[U] << "\n";
  }

  return 0;
}