template <typename T = queue<int>>
auto topological_sort(const auto& adj) {
  int n = adj.size();
  vector<int> in(n), order;

  for (int x : adj | views::join) in[x]++;

  T q;
  for (int i : views::iota(0, n)) {
    if (!in[i]) q.push(i);
  }

  while (!q.empty()) {
    int curr;
    if constexpr (requires { q.front(); }) curr = q.front();
    else curr = q.top();

    q.pop();
    order.push_back(curr);
    for (auto next : adj[curr]) {
      if (!--in[next]) q.push(next);
    }
  }

  return order.size() == n ? order : decltype(order){};
}