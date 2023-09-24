#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> V(N);
  for (int i = 0; i < N; i++) {
    cin >> V[i];
  }
  reverse(V.begin(), V.end());
  
  int score = 0, value = 0;
  for (int i = 0; i < N; i++) {
    value++;
    value = min(value, V[i]);
    score += value;
  }
  
  cout << score;
  
  return 0;
}