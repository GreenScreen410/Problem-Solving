#include <bits/stdc++.h>
using namespace std;
const long double EPS = 1e-9;

struct Point {
  long double x, y;
  Point operator+(const Point& o) const { return {x + o.x, y + o.y}; }
  Point operator-(const Point& o) const { return {x - o.x, y - o.y}; }
  Point operator*(long double k) const { return {x * k, y * k}; }
  long double cross(const Point& o) const { return x * o.y - y * o.x; }
};

struct Line {
  Point p, dir;
  long double angle;
  Line() {}
  Line(Point p, Point dir) : p(p), dir(dir) { angle = atan2(dir.y, dir.x); }
  bool on_left(const Point& q) const { return dir.cross(q - p) > -EPS; }
  Point intersect(const Line& o) const {
    long double t = (o.p - p).cross(o.dir) / dir.cross(o.dir);
    return p + dir * t;
  }
};

vector<Point> half_plane_intersection(vector<Line>& lines) {
  sort(lines.begin(), lines.end(), [](const Line& a, const Line& b) {
    if (abs(a.angle - b.angle) < EPS) return b.on_left(a.p);
    return a.angle < b.angle;
  });

  deque<Line> dq;
  for (size_t i = 0; i < lines.size(); i++) {
    if (i > 0 && abs(lines[i].angle - lines[i-1].angle) < EPS) continue;

    while (dq.size() >= 2 && !lines[i].on_left(dq.back().intersect(dq[dq.size() - 2]))) {
        dq.pop_back();
    }
    while (dq.size() >= 2 && !lines[i].on_left(dq.front().intersect(dq[1]))) {
        dq.pop_front();
    }
    dq.push_back(lines[i]);
  }

  while (dq.size() >= 3 && !dq.front().on_left(dq.back().intersect(dq[dq.size() - 2]))) {
    dq.pop_back();
  }
  while (dq.size() >= 3 && !dq.back().on_left(dq.front().intersect(dq[1]))) {
    dq.pop_front();
  }

  vector<Point> res;
  if (dq.size() < 3) return res;
  for (size_t i = 0; i < dq.size(); i++) {
    res.push_back(dq[i].intersect(dq[(i + 1) % dq.size()]));
  }
  return res;
}

long double get_area(const vector<Point>& p) {
  long double area = 0;
  for (size_t i = 0; i < p.size(); i++) area += p[i].cross(p[(i + 1) % p.size()]);
  return abs(area) / 2.0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  while (cin >> n) {
    vector<Point> poly(n);
    for (auto& p : poly) cin >> p.x >> p.y;
    reverse(poly.begin(), poly.end());
    
    vector<Line> lines;
    for (int i = 0; i < n; i++) {
      Point p1 = poly[i];
      Point p2 = poly[(i + 1) % n];
      lines.emplace_back(p1, p2 - p1);
    }
    
    vector<Point> kernel = half_plane_intersection(lines);
    cout << fixed << setprecision(2);
    if (kernel.empty()) cout << "0.00\n";
    else cout << get_area(kernel) << "\n";
  }

  return 0;
}