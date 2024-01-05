#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  long long result = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = i; j > 0; j /= 10) {
      result = (result * 10) % K;
    }
    result = (result + i) % K;
  }

  cout << result;

  return 0;
}