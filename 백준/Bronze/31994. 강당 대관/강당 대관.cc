#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<pair<int, string>> v(7);
  for (int i = 0; i < 7; i++) {
    cin >> v[i].second >> v[i].first;
  }
  sort(v.begin(), v.end());
  
  cout << v[6].second;
  
  return 0;
}