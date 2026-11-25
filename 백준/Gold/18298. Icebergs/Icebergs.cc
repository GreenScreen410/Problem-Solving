#include <bits/stdc++.h>
using namespace std;

struct Point {
  long long x, y;
  long long cross(const Point& other) const { return x * other.y - y * other.x; }
};

long long area2(const vector<Point> polygon) {
  long long sum = 0;
  int n = polygon.size();
  
  for (int i = 0; i < n; i++) {
    sum += polygon[i].cross(polygon[(i + 1) % n]);
  }
  
  return abs(sum);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N;
  cin >> N;
  
  long long area = 0;
  while (N--) {
    int P;
    cin >> P;
    
    vector<Point> polygon(P);
    for (auto& i : polygon) cin >> i.x >> i.y;
    area += area2(polygon);
  }
  
  cout << area / 2 << '\n';
  
  return 0;
}