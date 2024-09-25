#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;
  
  Point operator-(const Point& rhs) const {
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
    
  Point a, b;
  long long max_distance = -1;
  int j = 1;
  for (int i = 0; i < convex_hull.size(); i++) {
    int next_i = (i + 1) % convex_hull.size();
    while (true) {
      int next_j = (j + 1) % convex_hull.size();
      
      long long next_x = convex_hull[next_i].x + (convex_hull[next_j].x - convex_hull[j].x);
      long long next_y = convex_hull[next_i].y + (convex_hull[next_j].y - convex_hull[j].y);
      if (ccw(convex_hull[i], convex_hull[next_i], {next_x, next_y}) <= 0) break;
      j = next_j;
    }
    
    long long distance = get_distance(convex_hull[i], convex_hull[j]);
    if (distance > max_distance) {
      max_distance = distance;
      a = convex_hull[i];
      b = convex_hull[j];
    }
  }
  
  cout.precision(6);
  cout << fixed;
  cout << sqrt(max_distance);

  return 0;
}