#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;

  bool operator<(const Point& other) const {
    if (x == other.x) return y < other.y;
    return x < other.x;
  }

  bool operator<=(const Point& other) const {
    return *this < other || *this == other;
  }

  bool operator>(const Point& other) const {
    return !(*this <= other);
  }

  bool operator==(const Point& other) const {
    return x == other.x && y == other.y;
  }
};

long long ccw(Point a, Point b, Point c) {
  return a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y;
}

bool compare_ccw(Point points, Point a, Point b) {
  long long cp = ccw(points, a, b);
  if (cp == 0) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
  }
  return cp > 0;
}

vector<Point> convex_hull(vector<Point> points) {
  if (points.size() <= 2) return points;

  sort(points.begin(), points.end());
  Point pivot = points[0];
  sort(points.begin() + 1, points.end(), [&pivot](const Point& a, const Point& b) {
    return compare_ccw(pivot, a, b);
  });

  vector<Point> hull;
  hull.push_back(points[0]);
  hull.push_back(points[1]);

  for (int i = 2; i < points.size(); i++) {
    while (hull.size() >= 2 && ccw(hull[hull.size() - 2], hull.back(), points[i]) <= 0) {
      hull.pop_back();
    }
    hull.push_back(points[i]);
  }

  return hull;
}

bool is_inside(const vector<Point>& hull, const Point& p) {
  int n = hull.size();
  if (n < 3) return false;

  if (ccw(hull[0], hull[1], p) <= 0 || ccw(hull[0], hull[n - 1], p) >= 0) return false;

  int lo = 1, hi = n - 1;
  while (lo + 1 < hi) {
    int mid = (lo + hi) / 2;
    if (ccw(hull[0], hull[mid], p) > 0) lo = mid;
    else hi = mid;
  }

  return ccw(hull[lo], hull[hi], p) > 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<Point> points(N);
  for (int i = 0; i < N; i++) {
    cin >> points[i].x >> points[i].y;
  }

  vector<Point> hull = convex_hull(points);
  cout << (is_inside(hull, {0, 0}) ? "No" : "Yes");

  return 0;
}