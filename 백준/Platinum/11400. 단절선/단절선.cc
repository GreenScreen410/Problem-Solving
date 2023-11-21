#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[100001];
vector<pair<int, int>> answer;
int visited[100001];
int add = 1;

int dfs(int node, int par) {
  visited[node] = add++;
  int result = visited[node];

  for (int i = 0; i < graph[node].size(); i++) {
    int next = graph[node][i];

    if (next == par) continue;

    if (!visited[next]) {
      int low = dfs(next, node);

      if (low > visited[node]) {
        answer.push_back({min(node, next), max(node, next)});
      }

      result = min(result, low);
    } else {
      result = min(result, visited[next]);
    }
  }

  return result;
}

int main() {
  int V, E;
  cin >> V >> E;

  for (int i = 0; i < E; i++) {
    int A, B;
    cin >> A >> B;

    graph[A].push_back(B);
    graph[B].push_back(A);
  }

  for (int i = 1; i <= V; i++) {
    if (!visited[i]) dfs(i, true);
  }

  sort(answer.begin(), answer.end());
  cout << answer.size() << "\n";
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i].first << " " << answer[i].second << "\n";
  }

  return 0;
}