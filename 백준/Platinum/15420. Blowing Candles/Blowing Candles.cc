#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;
  
  Point operator + (const Point rhs) {
    return {x + rhs.x, y + rhs.y};
  }
  
  Point operator - (const Point rhs) {
    return {x - rhs.x, y - rhs.y};
  }
};
vector<Point> points;

long long ccw(Point a, Point b, Point c) {
  return a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y;
}

double get_distance(Point a, Point b, Point c) {
  double x = ((c.y - b.y) * a.x - (c.x - b.x) * a.y + c.x * b.y - c.y * b.x);
  double y = (c.y - b.y) * (c.y - b.y) + (c.x - b.x) * (c.x - b.x);
  return x * x / y;
}

bool compare_y(Point a, Point b) {
  if (a.y == b.y) return a.x < b.x;
  else return a.y < b.y;
}

bool compare_ccw(Point a, Point b) {
  long long cp = ccw(points[0], a, b);
  if (cp == 0) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
  }
  return cp > 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, R;
  cin >> N >> R;

  points.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> points[i].x >> points[i].y;
  }
  sort(points.begin(), points.end(), compare_y);
  sort(points.begin() + 1, points.end(), compare_ccw);
  
  vector<Point> convex_hull;
  convex_hull.push_back(points[0]);
  convex_hull.push_back(points[1]);
  
  for (int i = 2; i < N; i++) {
    while (convex_hull.size() >= 2) {
      Point b = convex_hull.back();
      convex_hull.pop_back();
      Point a = convex_hull.back();
      if (ccw(a, b, points[i]) > 0) {
        convex_hull.push_back(b);
        break;
      }
    }
    convex_hull.push_back(points[i]);
  }
  
  double min_distance;
  int j = 0;
  for (int i = 0; i < convex_hull.size(); i++) {
    int a = (i - 1 + convex_hull.size()) % convex_hull.size();
    int b = (j + 1) % convex_hull.size();
    double d1 = get_distance(convex_hull[j], convex_hull[i], convex_hull[a]);
    double d2 = get_distance(convex_hull[b], convex_hull[i], convex_hull[a]);

    while (d1 < d2) {
      j = b;
      b = (j + 1) % convex_hull.size();
      d1 = d2;
      d2 = get_distance(convex_hull[b], convex_hull[i], convex_hull[a]);
    }
    if (i == 0 or d1 < min_distance) min_distance = d1;
  }

  cout.precision(5);
  cout << fixed;
  cout << sqrt(min_distance);

  return 0;
}