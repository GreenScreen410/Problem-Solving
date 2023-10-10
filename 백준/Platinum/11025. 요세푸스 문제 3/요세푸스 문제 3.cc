#include <iostream>
using namespace std;

int main(void) {
  int N, K;
  cin >> N >> K;

  int result = 1;
  for (int i = 2; i <= N; i++) {
    result = (result + K - 1) % i + 1;
  }
  cout << result;

  return 0;
}