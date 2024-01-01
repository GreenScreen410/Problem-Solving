#include <iostream>
#include <vector>
using namespace std;

bool compare(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b) {
  return a.second.first > b.second.first;
}

int main() {
  int N;
  cin >> N;
  
  vector<pair<pair<int, int>, pair<int, int>>> status(N); 
  for (int i = 0; i < N; i++) {
    cin >> status[i].first.first >> status[i].first.second >> status[i].second.first;
  }
  sort(status.begin(), status.end(), compare);
  
  int count = 0;
  for (int i = 0; i < N; i++) {
    if (count > 2) break;
    if (status[i].second.second > 1) continue;
    
    cout << status[i].first.first << " " << status[i].first.second << "\n";

    for (int j = 0; j < N; j++) {
      if (status[j].first.first == status[i].first.first) {
        status[j].second.second++;
      }
    }
    count++;
  }
  
  return 0;
}