#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int minIndex(vector<long long> &v, vector<long long> &tree, int a, int b) {
  if (a == -1) return b;
  if (b == -1) return a;
  return v[a] <= v[b] ? a : b;
}
int init(vector<long long> &v, vector<long long> &tree, int node, int start, int end) {
  if (start == end) return tree[node] = start;
  int mid = (start + end) / 2;
  return tree[node] = minIndex(v, tree, init(v, tree, node * 2, start, mid), init(v, tree, node * 2 + 1, mid + 1, end));
}
long long update(vector<long long> &v, vector<long long> &tree, int node, int start, int end, int index, long long value) {
  if (index < start || index > end || start == end) return tree[node];
  int mid = (start + end) / 2;
  return tree[node] = minIndex(v, tree, update(v, tree, node * 2, start, mid, index, value), update(v, tree, node * 2 + 1, mid + 1, end, index, value));
}
long long query(vector<long long> &v, vector<long long> &tree, int node, int start, int end, int left, int right) {
  if (start > right || left > end) return -1;
  if (left <= start && end <= right) return tree[node];
  int mid = (start + end) / 2;
  return minIndex(v, tree, query(v, tree, node * 2, start, mid, left, right), query(v, tree, node * 2 + 1, mid + 1, end, left, right));
}

int main() {
  ios_base::sync_with_stdio();
  cin.tie(0);

  int N;
  cin >> N;

  vector<long long> v(N);
  vector<long long> tree(1 << (int)(ceil(log2(N)) + 1));
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  init(v, tree, 1, 0, N - 1);

  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    int a, b, c;
    cin >> a;

    if (a == 1) {
      cin >> b >> c;
      v[b - 1] = c;
      update(v, tree, 1, 0, N - 1, b - 1, c);
    } else {
      cout << query(v, tree, 1, 0, N - 1, 0, N - 1) + 1 << "\n";
    }
  }

  return 0;
}