#include <iostream>
using namespace std;

int main() {
  int P, C;
  cin >> P >> C;

  int score = P * 50 - C * 10;
  if (P > C) {
    score += 500;
  }
  
  cout << score;

  return 0;
}