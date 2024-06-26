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

long long get_distance(Point a, Point b) {
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
  int T;
  cin >> T;
  
  while (T--) {
    int n;
    cin >> n;
    
    points.resize(n);
    int w;
    for (int i = 0; i < n; i++) {
      cin >> points[i].x >> points[i].y >> w;
      points.push_back({points[i].x + w, points[i].y + w});
      points.push_back({points[i].x + w, points[i].y});
      points.push_back({points[i].x, points[i].y + w});
    }
    sort(points.begin(), points.end(), compare_y);
    sort(points.begin() + 1, points.end(), compare_ccw);
    
    vector<Point> convex_hull;
    convex_hull.push_back(points[0]);
    convex_hull.push_back(points[1]);
    
    for (int i = 2; i < n * 4; i++) {
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
    
    int r = 0;
    long long max_distance = 0;
    for (int i = 0; i < convex_hull.size(); i++) {
      int n = convex_hull.size();
      while (r < n * 2 && ccw(convex_hull[i], convex_hull[(i + 1) % n], convex_hull[(i + 1) % n] + convex_hull[(r + 1) % n] - convex_hull[(r + n) % n]) >= 0) {
        max_distance = max(max_distance, get_distance(convex_hull[i], convex_hull[r % convex_hull.size()]));
        r++;
      }
      max_distance = max(max_distance, get_distance(convex_hull[i], convex_hull[r % convex_hull.size()]));
    }
    
    cout << max_distance << "\n";
  }
  
  return 0;
}