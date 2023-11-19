#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.second == b.second) return a.first < b.first;
  return a.second < b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    int h, o;
    cin >> h >> o;
    if (h > o) swap(h, o);
    v[i].first = h;
    v[i].second = o;
  }
  sort(v.begin(), v.end(), compare);

  int d;
  cin >> d;

  priority_queue<int, vector<int>, greater<int>> pq;
  int include = 0, result = 0;
  for (int i = 0; i < n; i++) {
    while (!pq.empty() && pq.top() < v[i].second - d) {
      pq.pop();
      include--;
    }

    if (v[i].first >= v[i].second - d) {
      pq.push(v[i].first);
      include++;
      result = max(result, include);
    }
  }

  cout << result << "\n";

  return 0;
}