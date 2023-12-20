#include <iostream>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;
  
  long long result = 1;
  while (N--) {
    long long a;
    cin >> a;
    result = (a % M) * (result % M) % M;
  }
  
  cout << result;
  
  return 0;
}