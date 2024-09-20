#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
private:
  vector<int> parent;

public:
  DisjointSet(int size) : parent(size + 1) {
    for (int i = 1; i <= size; i++) {
      parent[i] = i;
    }
  }

  int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
  }

  void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) parent[y] = x;
  }

  bool is_same_parent(int x, int y) {
    return find(x) == find(y);
  }
};

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, pair<int, int>>> vertex;
  for (int i = 0; i < M; i++) {
    int A, B, C;
    cin >> A >> B >> C;
    vertex.push_back({C, {A, B}});
  }
  sort(vertex.begin(), vertex.end());

  DisjointSet ds(N);

  int answer = 0, last_edge = 0;
  for (int i = 0; i < M; i++) {
    int A = vertex[i].second.first;
    int B = vertex[i].second.second;
    if (!ds.is_same_parent(A, B)) {
      ds.merge(A, B);
      answer += vertex[i].first;
      last_edge = vertex[i].first;
    }
  }

  cout << answer - last_edge;

  return 0;
}