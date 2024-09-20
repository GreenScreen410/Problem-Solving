#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> parent(10001);

int find(int x) {
  return parent[x] == x ? x : parent[x] = find(parent[x]);
}

void merge(int x, int y) {
  x = find(x);
  y = find(y);
  if (x != y) parent[y] = x;
}

bool is_same_parent(int x, int y) {
  x = find(x);
  y = find(y);
  return x == y;
}

int main() {
  int V, E;
  cin >> V >> E;

  vector<pair<int, pair<int, int>>> vertex;
  for (int i = 0; i < E; i++) {
    int A, B, C;
    cin >> A >> B >> C;
    vertex.push_back({C, {A, B}});
  }
  sort(vertex.begin(), vertex.end());

  for (int i = 1; i <= V; i++) {
    parent[i] = i;
  }

  int answer = 0;
  for (int i = 0; i < E; i++) {
    int A = vertex[i].second.first;
    int B = vertex[i].second.second;
    if (!is_same_parent(A, B)) {
      merge(A, B);
      answer += vertex[i].first;
    }
  }

  cout << answer;

  return 0;
}