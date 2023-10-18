#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int init(vector<long long> &v, vector<long long> &tree, int node, int start, int end) {
  if (start == end) return tree[node] = v[start];
  int mid = (start + end) / 2;
  return tree[node] = min(init(v, tree, node * 2, start, mid), init(v, tree, node * 2 + 1, mid + 1, end));
}
long long query(vector<long long> &v, vector<long long> &tree, int node, int start, int end, int left, int right) {
  if (start > right || left > end) return 1000000001;
  if (left <= start && end <= right) return tree[node];
  int mid = (start + end) / 2;
  return min(query(v, tree, node * 2, start, mid, left, right), query(v, tree, node * 2 + 1, mid + 1, end, left, right));
}

int main() {
  ios_base::sync_with_stdio();
  cin.tie(0);

  int N, M;
  cin >> N >> M;

  vector<long long> v(N + 1);
  vector<long long> tree(1 << (int)(ceil(log2(N)) + 1));
  for (int i = 1; i <= N; i++) {
    cin >> v[i];
  }
  init(v, tree, 1, 1, N);

  for (int i = 0; i < M; i++) {
    long long a, b;
    cin >> a >> b;
    
    cout << query(v, tree, 1, 1, N, a, b) << "\n";
  }

  return 0;
}