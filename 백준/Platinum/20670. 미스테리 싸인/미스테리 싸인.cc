#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
  long long x, y;

  bool operator<(const Point& other) const {
    if (x == other.x) return y < other.y;
    return x < other.x;
  }

  bool operator<=(const Point& other) const {
    return *this < other || *this == other;
  }

  bool operator>(const Point& other) const {
    return !(*this <= other);
  }

  bool operator==(const Point& other) const {
    return x == other.x && y == other.y;
  }
};

long long ccw(Point a, Point b, Point c) {
  return a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y;
}

bool compare_y(Point a, Point b) {
  if (a.y == b.y) return a.x < b.x;
   return a.y < b.y;
}

bool compare_ccw(Point points, Point a, Point b) {
  long long cp = ccw(points, a, b);
  if (cp == 0) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
  }
  return cp > 0;
}

bool is_inside(const vector<Point>& hull, const Point& p) {
  int n = hull.size();
  if (n < 3) return false;
  if (ccw(hull[0], hull[1], p) < 0 || ccw(hull[0], hull[n - 1], p) > 0) return false;
  int lo = 1, hi = n - 1;
  while (lo + 1 < hi) {
    int mid = (lo + hi) / 2;
    if (ccw(hull[0], hull[mid], p) > 0) lo = mid;
    else hi = mid;
  }
  return ccw(hull[lo], hull[hi], p) >= 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, K;
  cin >> N >> M >> K;

  vector<Point> A(N), B(M), sign(K);
  for (int i = 0; i < N; i++) {
    cin >> A[i].x >> A[i].y;
  }
  for (int i = 0; i < M; i++) {
    cin >> B[i].x >> B[i].y;
  }
  for (int i = 0; i < K; i++) {
    cin >> sign[i].x >> sign[i].y;
  }

  int count = 0;
  for (int i = 0; i < K; i++) {
    if (!is_inside(A, sign[i])) count++;
    else if (is_inside(B, sign[i])) count++;
  }

  if (count > 0) {
    cout << count;
  } else {
    cout << "YES";
  }

  return 0;
}