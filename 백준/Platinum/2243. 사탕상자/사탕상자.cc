#include <iostream>
#include <vector>
using namespace std;

vector<long long> v(1000001);
vector<long long> tree(1000001 * 4);

long long query(int node, int start, int end, int taste) {
  if (start == end) return end;
  int mid = (start + end) / 2;
  if (tree[node * 2] >= taste) {
    return query(node * 2, start, mid, taste);
  } else {
    return query(node * 2 + 1, mid + 1, end, taste - tree[node * 2]);
  }
}

void update(int node, int start, int end, int index, long long value) {
  if (index < start || index > end) return;
  if (start == end) {
    tree[node] = value;
    return;
  }

  int mid = (start + end) / 2;
  update(node * 2, start, mid, index, value);
  update(node * 2 + 1, mid + 1, end, index, value);
  tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long A, B, C;
    cin >> A;

    if (A == 1) {
      cin >> B;
      int taste = query(1, 1, 1000001, B);
      cout << taste << "\n";
      update(1, 1, 1000001, taste, v[taste] - 1);
      v[taste]--;

    } else {
      cin >> B >> C;
      update(1, 1, 1000001, B, v[B] + C);
      v[B] += C;
    }
  }

  return 0;
}