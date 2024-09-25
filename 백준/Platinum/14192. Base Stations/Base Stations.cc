#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct BTS {
  long long x, y, k;
};

long long ccw(BTS a, BTS b, BTS c) {
  return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

vector<BTS> convex_hull(vector<BTS> points) {
  if (points.size() <= 2) return points;

  sort(points.begin(), points.end(), [](BTS a, BTS b) {
    return a.y < b.y || (a.y == b.y && a.x < b.x);
  });
  BTS pivot = points[0];
  sort(points.begin() + 1, points.end(), [pivot](BTS a, BTS b) {
    long long cp = ccw(pivot, a, b);
    return cp > 0 || (cp == 0 && (a.y < b.y || (a.y == b.y && a.x < b.x)));
  });

  vector<BTS> hull = {points[0], points[1]};
  for (int i = 2; i < points.size(); i++) {
    while (hull.size() >= 2 && ccw(hull[hull.size() - 2], hull.back(), points[i]) <= 0) {
      hull.pop_back();
    }
    hull.push_back(points[i]);
  }
  return hull;
}

long long distance(BTS a, BTS b) {
  long long dx = a.x - b.x;
  long long dy = a.y - b.y;
  return dx * dx + dy * dy;
}

long long rotating_calipers(vector<BTS> hull) {
  int n = hull.size();
  long long max_dist = 0;
  for (int i = 0, j = 1; i < n; i++) {
    while (true) {
      int next_j = (j + 1) % n;
      long long cross = (hull[next_j].x - hull[i].x) * (hull[j].y - hull[i].y) -
                        (hull[next_j].y - hull[i].y) * (hull[j].x - hull[i].x);
      if (cross <= 0) break;
      j = next_j;
    }
    if (hull[i].k != hull[j].k) {
      max_dist = max(max_dist, distance(hull[i], hull[j]));
    }
  }
  return max_dist;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int M;
    cin >> M;

    if (M == 0) break;

    vector<BTS> stations(M);
    for (int i = 0; i < M; i++) {
      cin >> stations[i].x >> stations[i].y >> stations[i].k;
    }

    vector<BTS> hull = convex_hull(stations);
    long long result = rotating_calipers(hull);

    for (BTS a : stations) {
      for (BTS b : hull) {
        if (a.k != b.k) result = max(result, distance(a, b));
      }
    }

    cout << result << "\n";
  }

  return 0;
}