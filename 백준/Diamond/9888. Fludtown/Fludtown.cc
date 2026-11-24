#include <bits/stdc++.h>
using namespace std;

template <typename T> struct Point {
  T x, y;
  auto operator<=>(const Point&) const = default;

  Point operator+(Point b) const { return { x + b.x, y + b.y }; }
  Point operator-(Point b) const { return { x - b.x, y - b.y }; }
  Point operator*(T s) const { return { x * s, y * s }; }
  Point operator/(T s) const { return { x / s, y / s }; }

  static int sign(T v) { return (v > 0) - (v < 0); }
  T dot(Point b) const { return x * b.x + y * b.y; }
  T cross(Point b) const { return x * b.y - y * b.x; }
  int ccw(Point b, Point c) const { return sign((b - *this).cross(c - *this)); }
  T norm2() const { return x * x + y * y; }
  T dist2(Point b) const { return (*this - b).norm2(); }
  long double norm() const { return hypot(x, y); }
  long double dist(Point b) const { return (*this - b).norm(); }
};

template <typename T> struct Line {
  Point<T> p, q;
  long double angle;

  Line(Point<T> p, Point<T> q)
      : p(p)
      , q(q) {
    angle = atan2l(q.y - p.y, q.x - p.x);
  }

  bool operator<(const Line& other) const { return angle < other.angle; }
  bool is_outside(const Point<T>& r) const { return p.ccw(q, r) <= 0; }

  Point<long double> intersect(const Line& other) const {
    long double det = (q - p).cross(other.q - other.p);
    long double t = (other.p - p).cross(other.q - other.p) / det;
    return { (long double)p.x + (q.x - p.x) * t, (long double)p.y + (q.y - p.y) * t };
  }
};

template <typename T>
vector<Point<long double>> half_plane_intersection(const vector<Line<T>>& lines, long double bound = 0, long double eps = 1e-12L) {
  using P = Point<long double>;
  struct HalfPlane {
    P p, dir;
    long double angle;
  };

  vector<HalfPlane> planes;
  planes.reserve(lines.size() + 4);
  auto add = [&](P p, P q) {
    P dir = q - p;
    long double length = hypotl(dir.x, dir.y);
    if (length == 0) return;
    dir = dir / length;
    planes.push_back({ p, dir, atan2l(dir.y, dir.x) });
  };
  for (const auto& line : lines) {
    add({ (long double)line.p.x, (long double)line.p.y }, { (long double)line.q.x, (long double)line.q.y });
  }
  if (bound > 0) {
    P a { -bound, -bound }, b { bound, -bound }, c { bound, bound }, d { -bound, bound };
    add(a, b);
    add(b, c);
    add(c, d);
    add(d, a);
  }
  sort(planes.begin(), planes.end(), [](const HalfPlane& a, const HalfPlane& b) { return a.angle < b.angle; });

  auto outside = [&](const HalfPlane& h, P p) { return h.dir.cross(p - h.p) < -eps; };
  auto intersect = [](const HalfPlane& a, const HalfPlane& b) {
    long double t = (b.p - a.p).cross(b.dir) / a.dir.cross(b.dir);
    return a.p + a.dir * t;
  };

  deque<HalfPlane> hull;
  for (const auto& h : planes) {
    while (hull.size() >= 2 && outside(h, intersect(hull[hull.size() - 2], hull.back()))) hull.pop_back();
    while (hull.size() >= 2 && outside(h, intersect(hull[0], hull[1]))) hull.pop_front();

    if (!hull.empty() && abs(hull.back().dir.cross(h.dir)) <= eps) {
      if (hull.back().dir.dot(h.dir) < 0) return {};
      if (!outside(h, hull.back().p)) continue;
      hull.back() = h;
    } else {
      hull.push_back(h);
    }
  }

  while (hull.size() > 2 && outside(hull.front(), intersect(hull[hull.size() - 2], hull.back()))) hull.pop_back();
  while (hull.size() > 2 && outside(hull.back(), intersect(hull[0], hull[1]))) hull.pop_front();
  if (hull.size() < 3) return {};

  vector<P> polygon;
  for (int i = 0, n = hull.size(); i < n; i++) {
    const auto& a = hull[i];
    const auto& b = hull[(i + 1) % n];
    if (a.dir.cross(b.dir) <= eps) return {};
    P p = intersect(a, b);
    if (polygon.empty() || (p - polygon.back()).norm2() > eps * eps) polygon.push_back(p);
  }
  if (polygon.size() > 1 && (polygon.front() - polygon.back()).norm2() <= eps * eps) polygon.pop_back();
  if (polygon.size() < 3) return {};

  long double area2 = 0;
  for (int i = 2; i < ssize(polygon); i++) {
    area2 += (polygon[i - 1] - polygon[0]).cross(polygon[i] - polygon[0]);
  }
  if (area2 <= eps * eps) return {};
  return polygon;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  Point<long long> home;
  cin >> n >> home.x >> home.y;

  vector<Line<long long>> borders;
  for (int i = 1; i < n; i++) {
    Point<long long> other;
    cin >> other.x >> other.y;

    auto mid = home + other - Point<long long> { 1000, 1000 };
    auto d = other - home;
    borders.emplace_back(mid, mid + Point<long long> { -d.y, d.x });
  }

  cout << half_plane_intersection(borders, 1000).size() << '\n';

  return 0;
}