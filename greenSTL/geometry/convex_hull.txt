template <typename T>
vector<Point<T>> convex_hull(vector<Point<T>> points) {
  if (points.size() <= 2) return points;

  constexpr long double EPS = 1e-9L;
  sort(points.begin(), points.end());

  vector<Point<T>> lower;
  for (auto& p : points) {
    while (lower.size() >= 2 && static_cast<long double>(lower[lower.size() - 2].ccw(lower.back(), p)) <= EPS) lower.pop_back();
    lower.push_back(p);
  }

  vector<Point<T>> upper;
  for (auto it = points.rbegin(); it != points.rend(); it++) {
    while (upper.size() >= 2 && static_cast<long double>(upper[upper.size() - 2].ccw(upper.back(), *it)) <= EPS) upper.pop_back();
    upper.push_back(*it);
  }

  vector<Point<T>> hull;
  hull.assign(lower.begin(), lower.end() - 1);
  hull.insert(hull.end(), upper.begin(), upper.end() - 1);

  return hull;
}
