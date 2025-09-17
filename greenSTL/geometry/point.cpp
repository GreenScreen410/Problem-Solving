template <typename T>
struct Point {
  T x, y;
  auto operator<=>(const Point<T>&) const = default;

  Point operator+(const Point& other) const { return {x + other.x, y + other.y}; }
  Point operator-(const Point& other) const { return {x - other.x, y - other.y}; }
  Point operator*(T scalar) const { return {x * scalar, y * scalar}; }
  Point operator/(T scalar) const { return {x / scalar, y / scalar}; }

  T dot(const Point& other) const { return x * other.x + y * other.y; }
  T cross(const Point& other) const { return x * other.y - y * other.x; }
  T ccw(const Point<T>& b, const Point<T>& c) const { return (b - *this).cross(c - *this); }
  T norm2() const { return x * x + y * y; }
  T dist2(const Point<T>& other) const { return (*this - other).norm2(); }
  long double dist(const Point<T>& other) const { return sqrt(dist2(other)); }
};
