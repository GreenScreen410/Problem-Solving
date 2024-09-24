#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  int index;
  long long x, y;
};
vector<Point> points;

long long ccw(Point a, Point b, Point c) {
  return a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y;
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
  int c;
  cin >> c;
  
  while (c--) {
    int n;
    cin >> n;
    
    points.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> points[i].x >> points[i].y;
      points[i].index = i;
    }
    sort(points.begin(), points.end(), compare_y);
    sort(points.begin() + 1, points.end(), compare_ccw);
    
    int i = n - 2;
    while (i >= 0 && ccw(points[0], points[i], points[i + 1]) == 0) {
      i--;
    }
    for (int j = 0; j <= i; j++) {
      cout << points[j].index << " ";
    }
    for (int j = n - 1; j > i; j--) {
      cout << points[j].index << " ";
    }
    cout << "\n";    
  }

  return 0;
}