template <typename T = long long>
struct FenwickTree {
  vector<T> tree;

  FenwickTree(int n) : tree(n + 1) {}

  void add(int i, auto v) {
    for (i++; i < ssize(tree); i += i & -i) tree[i] += v;
  }

  T sum(int i) {
    T res = 0;
    for (i++; i > 0; i -= i & -i) res += tree[i];
    return res;
  }

  T query(int l, int r) {
    return sum(r - 1) - sum(l - 1);
  }
};