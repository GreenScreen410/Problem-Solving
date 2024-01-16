#include <iostream>
#include <vector>
using namespace std;
const int INF = 987654321;

double burn_graph(int N, vector<vector<int>> &graph, vector<vector<int>> &shortest) {
  double shortest_time = INF, longest_time, spent_time, remain_len;
  for (int i = 1; i <= N; i++) {
    longest_time = 0;

    int edge_len;
    for (int S = 1; S <= N; S++) {
      for (int E = 1; E <= N; E++) {
        edge_len = graph[S][E];

        if (edge_len != -1) {
          remain_len = edge_len - (shortest[i][E] - shortest[i][S]);

          if (remain_len > 0) {
            spent_time = (remain_len / 2) + shortest[i][E];
            longest_time = max(longest_time, spent_time);
          }
        }
      }
    }

    shortest_time = min(shortest_time, longest_time);
  }

  return shortest_time;
}

void floyd_warshall(vector<vector<int>> &shortest) {
  for (int k = 1; k <= shortest.size() - 1; k++) {
    for (int i = 1; i <= shortest.size() - 1; i++) {
      for (int j = 1; j <= shortest.size() - 1; j++) {
        shortest[i][j] = min(shortest[i][j], shortest[i][k] + shortest[k][j]);
      }
    }
  }
}

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> graph(N + 1, vector<int>(N + 1, -1));
  vector<vector<int>> shortest(N + 1, vector<int>(N + 1, INF));

  for (int i = 1; i <= N; i++) {
    shortest[i][i] = 0;
  }

  while (M--) {
    int S, E, L;
    cin >> S >> E >> L;

    if (graph[S][E] == -1 || graph[S][E] < L) {
      graph[S][E] = L;
      graph[E][S] = L;
    }
    if (shortest[S][E] == INF || shortest[S][E] > L) {
      shortest[S][E] = L;
      shortest[E][S] = L;
    }
  }

  floyd_warshall(shortest);

  cout.precision(1);
  cout << fixed << burn_graph(N, graph, shortest);

  return 0;
}