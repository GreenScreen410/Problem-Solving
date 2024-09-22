#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> indegree(N + 1);
  vector<vector<int>> graph(N + 1);
  for (int i = 0; i < M; i++) {
    int size;
    cin >> size;

    vector<int> order(size);
    for (int j = 0; j < size; j++) {
      cin >> order[j];
    }
    for (int j = 0; j < size - 1; j++) {
      indegree[order[j + 1]]++;
      graph[order[j]].push_back(order[j + 1]);
    }
  }

  queue<int> q;
  for (int i = 1; i <= N; i++) {
    if (indegree[i] == 0) q.push(i);
  }

  vector<int> result;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    result.push_back(now);

    for (int next : graph[now]) {
      indegree[next]--;
      if (indegree[next] == 0) q.push(next);
    }
  }

  if (result.size() != N) {
    cout << "0" << "\n";
  } else {
    for (int i : result) {
      cout << i << "\n";
    }
  }

  return 0;
}