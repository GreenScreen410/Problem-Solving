#include <iostream>
using namespace std;

int main() {
  int n, T;
  cin >> n >> T;

  int sum = 0, count = 0;
  while (n--) {
    int time;
    cin >> time;

    sum += time;

    if (sum > T) {
      break;
    }

    count++;
  }

  cout << count;

  return 0;
}