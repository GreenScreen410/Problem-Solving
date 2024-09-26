#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;

  Point operator+(Point rhs) {
    return {x + rhs.x, y + rhs.y};
  }
  Point operator-(Point rhs) {
    return {x - rhs.x, y - rhs.y};
  }
};

long double ccw(Point a, Point b, Point c) {
  return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

long long product(Point a, Point b, int is_dot) {
  return is_dot ? a.x * b.x + a.y * b.y : a.x * b.y - a.y * b.x;
}

long double euclidean_distance(Point a, Point b) {
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

long double point_to_line_distance(Point a, Point b, Point c) {
  return 1.0 * abs(product(b - a, c, 0)) / euclidean_distance(a, a + c);
}

vector<Point> convex_hull(vector<Point> points) {
  sort(points.begin(), points.end(), [](Point a, Point b) {
    return a.y < b.y || (a.y == b.y && a.x < b.x);
  });
  Point pivot = points[0];
  sort(points.begin() + 1, points.end(), [pivot](Point a, Point b) {
    long double cp = ccw(pivot, a, b);
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

long double rotating_calipers(vector<Point> hull) {
  int p1 = 1, p2 = 1, p3 = 1, n = hull.size();
  long double max_distance = LLONG_MAX;
  for (int i = 0; i < n; i++) {
    if (p1 % n == i) p1++;
    if (p2 % n == i) p2++;
    if (p3 % n == i) p3++;

    while (true) {
      bool updated = false;
      if (ccw(hull[i], hull[(i + 1) % n], hull[(p1 + 1) % n] - hull[p1 % n] + hull[(i + 1) % n]) > 0 &&
          product(hull[(i + 1) % n] - hull[i], hull[(p1 + 1) % n] - hull[p1 % n], 1) > 0) {
        p1++;
        updated = true;
      }
      if (ccw(hull[i], hull[(i + 1) % n], hull[(p2 + 1) % n] - hull[p2 % n] + hull[(i + 1) % n]) > 0) {
        p2++;
        updated = true;
      }
      if (ccw(hull[i], hull[(i + 1) % n], hull[(p3 + 1) % n] - hull[p3 % n] + hull[(i + 1) % n]) > 0 ||
          product(hull[(i + 1) % n] - hull[i], hull[(p3 + 1) % n] - hull[p3 % n], 1) < 0) {
        p3++;
        updated = true;
      }
      if (!updated) break;
    }
    Point p = hull[(i + 1) % n] - hull[i];
    max_distance = min(max_distance, (point_to_line_distance(hull[i], hull[p2 % n], p) + point_to_line_distance(hull[p1 % n], hull[p3 % n], {p.y, -p.x})) * 2);
  }
  return max_distance;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int N;
    cin >> N;

    if (N == 0) break;

    vector<Point> points(N);
    for (int i = 0; i < N; i++) {
      cin >> points[i].x >> points[i].y;
    }
    vector<Point> hull = convex_hull(points);

    cout << fixed << setprecision(7);
    if (hull.size() == 1) {
      cout << 0;
      return 0;
    }
    if (hull.size() == 2) {
      cout << 2.0 * euclidean_distance(points[0], points[1]);
      return 0;
    }

    cout << rotating_calipers(hull) << "\n";
  }

  return 0;
}