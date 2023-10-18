#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int initMin(vector<long long> &v, vector<pair<int, int>> &tree, int node, int start, int end) {
  if (start == end) return tree[node].first = v[start];
  int mid = (start + end) / 2;
  return tree[node].first = min(initMin(v, tree, node * 2, start, mid), initMin(v, tree, node * 2 + 1, mid + 1, end));
}
long long queryMin(vector<long long> &v, vector<pair<int, int>> &tree, int node, int start, int end, int left, int right) {
  if (start > right || left > end) return 1000000001;
  if (left <= start && end <= right) return tree[node].first;
  int mid = (start + end) / 2;
  return min(queryMin(v, tree, node * 2, start, mid, left, right), queryMin(v, tree, node * 2 + 1, mid + 1, end, left, right));
}
int initMax(vector<long long> &v, vector<pair<int, int>> &tree, int node, int start, int end) {
  if (start == end) return tree[node].second = v[start];
  int mid = (start + end) / 2;
  return tree[node].second = max(initMax(v, tree, node * 2, start, mid), initMax(v, tree, node * 2 + 1, mid + 1, end));
}
long long queryMax(vector<long long> &v, vector<pair<int, int>> &tree, int node, int start, int end, int left, int right) {
  if (start > right || left > end) return -1000000001;
  if (left <= start && end <= right) return tree[node].second;
  int mid = (start + end) / 2;
  return max(queryMax(v, tree, node * 2, start, mid, left, right), queryMax(v, tree, node * 2 + 1, mid + 1, end, left, right));
}

int main() {
  ios_base::sync_with_stdio();
  cin.tie(0);

  int N, M;
  cin >> N >> M;

  vector<long long> v(N + 1);
  vector<pair<int, int>> tree(1 << (int)(ceil(log2(N)) + 1));
  for (int i = 1; i <= N; i++) {
    cin >> v[i];
  }
  initMin(v, tree, 1, 1, N);
  initMax(v, tree, 1, 1, N);

  for (int i = 0; i < M; i++) {
    long long a, b;
    cin >> a >> b;
    
    cout << queryMin(v, tree, 1, 1, N, a, b) << " " << queryMax(v, tree, 1, 1, N, a, b) << "\n";
  }

  return 0;
}