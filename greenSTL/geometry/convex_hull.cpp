template <typename T>
vector<Point<T>> convex_hull(vector<Point<T>> points) {
  ranges::sort(points);

  vector<Point<T>> lower, upper;
  for (const auto& p : points) {
    while (lower.size() >= 2 && end(lower)[-2].ccw(lower.back(), p) <= 0) lower.pop_back();
    lower.push_back(p);
  }
  for (const auto& p : views::reverse(points)) {
    while (upper.size() >= 2 && end(upper)[-2].ccw(upper.back(), p) <= 0) upper.pop_back();
    upper.push_back(p);
  }

  lower.pop_back();
  lower.insert(lower.end(), upper.begin(), upper.end() - 1);

  return lower;
}