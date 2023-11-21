#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[10001];
int visited[10001], isArticulation[10001];
int add = 1;

int dfs(int node, bool isRoot) {
  visited[node] = add++;
  int result = visited[node];
  int child = 0;

  for (int i = 0; i < graph[node].size(); i++) {
    int next = graph[node][i];

    if (!visited[next]) {
      child++;
      int low = dfs(next, false);

      if (!isRoot && low >= visited[node]) {
        isArticulation[node] = true;
      }
      
      result = min(result, low);
    } else {
      result = min(result, visited[next]);
    }
  }

  if (isRoot && child >= 2) {
    isArticulation[node] = true;
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

  vector<int> answer;
  for (int i = 1; i <= V; i++) {
    if (isArticulation[i]) answer.push_back(i);
  }

  cout << answer.size() << "\n";
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << " ";
  }

  return 0;
}