template <typename T, typename F>
struct SegTree {
  int n;
  T id;
  F merge;
  vector<T> tree;

  SegTree(int n, T id, F merge) : n(n), id(id), merge(merge), tree(2 * n, id) {}

  void build(const vector<T>& v) {
    for (int i = 0; i < n; i++) tree[n + i] = v[i];
    for (int i = n - 1; i > 0; i--) tree[i] = merge(tree[2 * i], tree[2 * i + 1]);
  }

  void update(int i, T x) {
    for (tree[i += n] = x; i > 1; i >>= 1) tree[i >> 1] = merge(tree[i & ~1], tree[i | 1]);
  }

  T query(int l, int r) {
    T result_l = id, result_r = id;
    for (l += n, r += n; l < r; l /= 2, r /= 2) {
      if (l & 1) result_l = merge(result_l, tree[l++]);
      if (r & 1) result_r = merge(tree[--r], result_r);
    }
    return merge(result_l, result_r);
  }
};