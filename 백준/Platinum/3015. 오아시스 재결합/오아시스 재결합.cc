#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> v(500001);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  long long answer = 0;
  stack<pair<int, int>> s;
  for (int i = 0; i < N; i++) {
    int count = 1;
    while (!s.empty() && s.top().first <= v[i]) {
      if (s.top().first == v[i]) {
        count += s.top().second;
        answer += s.top().second;
        s.pop();
      } else {
        answer += s.top().second;
        s.pop();
      }
    }
    
    if (!s.empty()) answer++;
    s.push({v[i], count});
  }

  cout << answer;

  return 0;
}