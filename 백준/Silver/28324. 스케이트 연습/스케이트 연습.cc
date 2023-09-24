#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N;
  cin >> N;

  vector<int> V(N);
  for (int i = 0; i < N; i++) {
    cin >> V[i];
  }
  reverse(V.begin(), V.end());
  
  long long score = 0;
  int value = 0;
  for (int i = 0; i < N; i++) {
    value++;
    value = min(value, V[i]);
    score += value;
  }
  
  cout << score;
  
  return 0;
}