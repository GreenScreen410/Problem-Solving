#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Point {
  T x, y;
  auto operator<=>(const Point<T>&) const = default;
  Point operator-(const Point& other) const { return {x - other.x, y - other.y}; }
  T cross(const Point& other) const { return x * other.y - y * other.x; }
  T ccw(const Point<T>& b, const Point<T>& c) const { return (b - *this).cross(c - *this); }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<Point<long long>> points;
  while (true) {
    points.clear();

    long long x, y;
    while (cin >> x >> y && (x != 0 || y != 0)) points.push_back({x, y});
    if (points.empty()) break;

    sort(points.begin(), points.end());
    points.erase(unique(points.begin(), points.end()), points.end());

    bool found = false;
    vector<vector<Point<long long>>> lines;
    for (int i = 0; i < points.size() - 1; i++) {
      for (int j = i + 1; j < points.size(); j++) {
        bool is_duplicate = false;
        for (int k = 0; k < j; k++) {
          if (k == i) continue;
          if (points[k].ccw(points[i], points[j]) == 0) {
            is_duplicate = true;
            break;
          }
        }
        if (is_duplicate) continue;

        vector<Point<long long>> current_line;
        current_line.push_back(points[i]);
        current_line.push_back(points[j]);

        for (int k = j + 1; k < points.size(); k++) {
          if (points[i].ccw(points[j], points[k]) == 0) {
            current_line.push_back(points[k]);
          }
        }

        if (current_line.size() >= 3) {
          lines.push_back(current_line);
          found = true;
        }
      }
    }

    if (found) {
      cout << "The following lines were found:" << "\n";
      for (const auto& line : lines) {
        for (const auto& p : line) {
          cout << "(" << setw(4) << p.x << "," << setw(4) << p.y << ")";
        }
        cout << "\n";
      }
    } else {
      cout << "No lines were found" << "\n";
    }
  }

  return 0;
}