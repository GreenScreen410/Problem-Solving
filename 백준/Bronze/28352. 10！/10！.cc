#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long result = 1;
  for (int i = 1; i <= N; i++) {
    result *= i;
  }
  
  cout << result / 604800;

  return 0;
}