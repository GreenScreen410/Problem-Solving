void floyd_warshall(auto& dist) {
  auto range = views::iota(0, (int)dist.size());
  for (int k : range) {
    for (int i : range) {
      for (int j : range) {
        dist[i][j] = min(dist[i][j], add_sat(dist[i][k], dist[k][j]));
      }
    }
  }
}