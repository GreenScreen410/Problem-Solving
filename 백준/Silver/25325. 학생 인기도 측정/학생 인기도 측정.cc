#include <iostream>
#include <vector>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
  if (a.second == b.second) return a.first < b.first;
  return a.second > b.second;
}

int main() {
  int n;
  cin >> n;
  
  vector<pair<string, int>> name(n);
  for (int i = 0; i < n; i++) {
    cin >> name[i].first;
  }
  
  string A;
  while (cin >> A) {
    for (int i = 0; i < n; i++) {
      if (name[i].first == A) name[i].second++;
    }
  }
  sort(name.begin(), name.end(), compare);
  
  for (int i = 0; i < n; i++) {
    cout << name[i].first << " " << name[i].second << "\n";
  }
  
  return 0;
}