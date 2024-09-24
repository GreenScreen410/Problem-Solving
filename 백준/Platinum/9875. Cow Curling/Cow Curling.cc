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

bool compare_y(Point a, Point b) {
  if (a.y == b.y) return a.x < b.x;
   return a.y < b.y;
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

  sort(points.begin(), points.end(), compare_y);
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

bool is_inside(vector<Point> hull, Point p) {
  if (hull.size() <= 2) return !ccw(hull[0], hull[1], p) && min(hull[0], hull[1]) <= p && p <= max(hull[0], hull[1]);
  auto it = lower_bound(hull.begin() + 2, hull.end(), p, [&](Point a, Point b) {
    return ccw(hull[0], a, p) > 0;
  });
  int index = distance(hull.begin(), it);
  return ccw(hull[0], hull[index - 1], p) >= 0 && ccw(hull[index - 1], hull[index % hull.size()], p) >= 0 && ccw(hull[index % hull.size()], hull[0], p) >= 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<Point> points_A(N), points_B(N);
  for (int i = 0; i < N; i++) {
    cin >> points_A[i].x >> points_A[i].y;
  }

  for (int i = 0; i < N; i++) {
    cin >> points_B[i].x >> points_B[i].y;
  }

  vector<Point> hull_A = convex_hull(points_A);
  vector<Point> hull_B = convex_hull(points_B);

  int count_A = 0, count_B = 0;
  for (int i = 0; i < N; i++) {
    if (is_inside(hull_A, points_B[i])) count_A++;
  }
  for (int i = 0; i < N; i++) {
    if (is_inside(hull_B, points_A[i])) count_B++;
  }

  cout << count_A << " " << count_B;

  return 0;
}