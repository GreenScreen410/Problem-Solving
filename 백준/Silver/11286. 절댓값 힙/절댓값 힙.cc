#include <iostream>
#include <queue>
using namespace std;

struct compare {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) return a > b;
    else return abs(a) > abs(b);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  priority_queue<int, vector<int>, compare> pq;
  while (N--) {
    int x;
    cin >> x;

    if (x == 0) {
      if (pq.empty()) {
        cout << "0\n";
      } else {
        cout << pq.top() << "\n";
        pq.pop();
      }
    }

    else {
      pq.push(x);
    }
  }

  return 0;
}