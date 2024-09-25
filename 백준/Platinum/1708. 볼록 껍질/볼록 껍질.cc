#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;
};

long long ccw(Point a, Point b, Point c) {
  return a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y;
}

bool compare_y(Point a, Point b) {
  if (a.y == b.y) return a.x < b.x;
  else return a.y < b.y;
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
  sort(points.begin(), points.end(), compare_y);
  Point pivot = points[0];
  sort(points.begin() + 1, points.end(), [pivot](Point a, Point b) {
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

int main() {
  int N;
  cin >> N;

  vector<Point> points(N);
  for (int i = 0; i < N; i++) {
    cin >> points[i].x >> points[i].y;
  }

  cout << convex_hull(points).size();

  return 0;
}