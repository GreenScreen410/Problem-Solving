struct FenwickTree {
  int n;
  vector<long long> tree;

  FenwickTree(int n) : n(n), tree(n + 1) {}

  void add(int i, long long diff) {
    for (i++; i <= n; i += i & -i) tree[i] += diff;
  }

  long long sum(int i) {
    long long result = 0;
    for (i++; i > 0; i -= i & -i) result += tree[i];
    return result;
  }

  long long query(int l, int r) {
    return sum(r - 1) - sum(l - 1);
  }
};