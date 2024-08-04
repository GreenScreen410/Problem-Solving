#include <iostream>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  
  int speed = 0;
  while (N--) {
    int a;
    cin >> a;
    
    if (speed > S) speed--;
    speed += a;
  }
  
  cout << speed;

  return 0;
}