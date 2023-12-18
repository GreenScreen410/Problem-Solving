#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int result = 0;
  while (N--) {
    int C, K;
    cin >> C >> K;
    result += C * K;
  }
  
  cout << result;
  
  return 0;
}