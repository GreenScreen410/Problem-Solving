#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<bool> check(4000000 + 1, 1);
  for (int i = 2; i < sqrt(4000000); i++) {
    for (int j = 2 * i; j <= 4000000; j += i) {
      check[j] = 0;
    }
  }

  int sum = 0;
  vector<int> prefix_sum = {0};
  for (int i = 2; i <= 4000000; i++) {
    if (check[i] == 1) {
      sum += i;
      prefix_sum.push_back(sum);
    }
  }

  int count = 0, left = 0, right = 0;
  while (left <= right && right < prefix_sum.size()) {
    if (prefix_sum[right] - prefix_sum[left] > N) {
      left++;
    } else if (prefix_sum[right] - prefix_sum[left] < N) {
      right++;
    } else {
      count++;
      right++;
    }
  }

  cout << count;

  return 0;
}