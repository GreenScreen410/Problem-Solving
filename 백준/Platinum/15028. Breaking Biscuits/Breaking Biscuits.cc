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

double get_distance(Point a, Point b) {
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
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
  int n;
  cin >> n;
  
  points.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> points[i].x >> points[i].y;
  }
  sort(points.begin(), points.end(), compare_y);
  sort(points.begin() + 1, points.end(), compare_ccw);
  
  vector<Point> convex_hull;
  convex_hull.push_back(points[0]);
  convex_hull.push_back(points[1]);
  
  for (int i = 2; i < n; i++) {
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
  
  int size = convex_hull.size();
  double min_distance = 1e9;
  for (int i = 0; i < size; i++) {
    double distance = 0;
    Point a = convex_hull[i];
    Point b = convex_hull[(i + 1) % size];

    for (int j = i + 2; j < size + i; j++) {
      double p1 = abs((b.x - a.x) * (a.y - convex_hull[j % size].y) - (a.x - convex_hull[j % size].x) * (b.y - a.y));
      double p2 = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
      if (distance < p1 / p2) distance = p1 / p2;
    }
    if (min_distance > distance) min_distance = distance;
  }


  cout.precision(6);
  cout << fixed;
  cout << min_distance;

  return 0;
}