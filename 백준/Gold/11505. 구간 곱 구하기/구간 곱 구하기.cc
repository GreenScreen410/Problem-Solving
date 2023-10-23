#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

long long init(vector<long long> &v, vector<long long> &tree, int node,
               int start, int end) {
  if (start == end) return tree[node] = v[start];
  return tree[node] =
             (init(v, tree, node * 2, start, (start + end) / 2) *
              init(v, tree, node * 2 + 1, (start + end) / 2 + 1, end)) %
             1000000007;
}
long long update(vector<long long> &tree, int node, int start, int end,
                 int index, long long diff) {
  if (index < start || index > end) return tree[node];
  if (start == end) return tree[node] = diff;
  return tree[node] =
             (update(tree, node * 2, start, (start + end) / 2, index, diff) *
              update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index,
                     diff)) %
             1000000007;
}
long long sum(vector<long long> &tree, int node, int start, int end, int left,
              int right) {
  if (left > end || right < start) return 1;
  if (left <= start && end <= right) return tree[node];
  return (sum(tree, node * 2, start, (start + end) / 2, left, right) *
          sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right)) %
         1000000007;
}

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  vector<long long> v(N);
  vector<long long> tree(1 << (int)(ceil(log2(N)) + 1));
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  init(v, tree, 1, 0, N - 1);

  for (int i = 0; i < M + K; i++) {
    int a, b;
    long long c;
    cin >> a >> b >> c;

    if (a == 1) {
      update(tree, 1, 0, N - 1, b - 1, c);
      v[b - 1] = c;
    } else {
      cout << sum(tree, 1, 0, N - 1, b - 1, c - 1) << "\n";
    }
  }

  return 0;
}