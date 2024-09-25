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

vector<Point> convex_hull(vector<Point> points) {
  sort(points.begin(), points.end(), [](Point a, Point b) {
    return a.y < b.y || (a.y == b.y && a.x < b.x);
  });
  Point pivot = points[0];
  sort(points.begin() + 1, points.end(), [pivot](Point a, Point b) {
    long long cp = ccw(pivot, a, b);
    return cp > 0 || (cp == 0 && (a.y < b.y || (a.y == b.y && a.x < b.x)));
  });
  
  vector<Point> hull = {points[0], points[1]};
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