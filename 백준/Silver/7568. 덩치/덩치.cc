#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> status(N);
  for (int i = 0; i < N; i++) {
    cin >> status[i].first >> status[i].second;
  }
  
  int rank;
  for (int i = 0; i < N; i++) {
    rank = 1;
    for (int j = 0; j < N; j++) {
      if (status[i].first < status[j].first && status[i].second < status[j].second) {
        rank++;
      }
    }
    cout << rank << " ";
  }

  return 0;
}