#include <iostream>
#include <queue>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  queue<int> q;
  for (int i = 1; i <= N; i++) {
    q.push(i);
  }

  cout << "<";
  while (!q.empty()) {
    for (int i = 0; i < K - 1; i++) {
      q.push(q.front());
      q.pop();
    }
    if (q.size() == 1) {
      cout << q.front() << ">";
      q.pop();
    } else {
      cout << q.front() << ", ";
      q.pop();
    }
  }

  return 0;
}