#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int a_score = 0, b_score = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;
    
    if (a > b) {
      a_score += a + b;
    } else if (a == b) {
      a_score += a, b_score += b;
    } else {
      b_score += a + b;
    }
  }
  
  cout << a_score << " " << b_score;
  
  return 0;
}