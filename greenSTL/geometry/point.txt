template <typename T>
struct Point {
  T x, y;
  auto operator<=>(const Point<T>&) const = default;

  T ccw(const Point<T>& b, const Point<T>& c) const {
    return (b.x - x) * (c.y - y) - (b.y - y) * (c.x - x);
  }

  T dist2(const Point<T>& other) const {
    return (x - other.x) * (x - other.x) + (y - other.y) * (y - other.y);
  }

  long double dist(const Point<T>& other) const {
    return sqrt(dist2(other));
  }
};