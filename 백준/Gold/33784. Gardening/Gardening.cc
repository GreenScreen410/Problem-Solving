#include <bits/stdc++.h>
using namespace std;

struct Point {
  long long x, y;
  long long cross(Point p) const { return x * p.y - y * p.x; }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int m;
  cin >> m;
  
  Point p0;
  cin >> p0.x >> p0.y;
  
  Point pi = p0;
  long long area2 = 0;
  for (int i = 0; i + 1 < m; i++) {
    Point pnext;
    cin >> pnext.x >> pnext.y;
    area2 += pi.cross(pnext);
    pi = pnext;
  }
  
  area2 += pi.cross(p0);
  cout << abs(area2) / 2 << '\n';
  
  return 0;
}