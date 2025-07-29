template <typename T>
vector<Point<T>> convex_hull(vector<Point<T>> points) {
  sort(points.begin(), points.end());

  vector<Point<T>> lower, upper;
  for (const auto& p : points) {
    while (lower.size() >= 2 && static_cast<long double>(end(lower)[-2].ccw(lower.back(), p)) <= 1e-9L) lower.pop_back();
    lower.push_back(p);
  }
  for (const auto& p : views::reverse(points)) {
    while (upper.size() >= 2 && static_cast<long double>(end(upper)[-2].ccw(upper.back(), p)) <= 1e-9L) upper.pop_back();
    upper.push_back(p);
  }

  lower.pop_back();
  lower.insert(lower.end(), upper.begin(), upper.end() - 1);

  return lower;
}