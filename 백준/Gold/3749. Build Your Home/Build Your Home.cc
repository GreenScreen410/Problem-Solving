#include <bits/stdc++.h>
using namespace std;

struct Point {
  long double x, y;
  Point operator-(Point p) const { return {x - p.x, y - p.y}; }
  long double cross(Point p) const { return x * p.y - y * p.x; }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int k;
    cin >> k;
    if (k == 0) break;
    
    Point p0;
    cin >> p0.x >> p0.y;
    
    Point prev{0, 0};
    long double area = 0;
    for (int i = 1; i < k; i++) {
      Point pi;
      cin >> pi.x >> pi.y;
      
      pi = pi - p0;
      area += prev.cross(pi);
      prev = pi;
    }
    
    cout << fixed << setprecision(0);
    cout << roundl(abs(area) / 2) << '\n';
  }
  
  return 0;
}