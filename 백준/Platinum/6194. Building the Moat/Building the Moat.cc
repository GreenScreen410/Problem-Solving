#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;
};
vector<Point> points;

long long ccw(Point a, Point b, Point c) { return a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y; }

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
  int N;
  cin >> N;

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

  double result = 0;
  for (int i = 0; i < convex_hull.size(); i++) {
    Point a = convex_hull[i];
    Point b = convex_hull[(i + 1) % convex_hull.size()];
    result += sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
  }

  cout << fixed;
  cout.precision(2);
  cout << result << endl;

  return 0;
}