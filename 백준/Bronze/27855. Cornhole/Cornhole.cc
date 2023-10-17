#include <iostream>
using namespace std;

int main() {
  int H1, B1, H2, B2;
  cin >> H1 >> B1 >> H2 >> B2;
  
  int score1 = H1 * 3 + B1;
  int score2 = H2 * 3 + B2;

  if (abs(score1 - score2) == 0) {
    cout << "NO SCORE";
    return 0;
  }
  
  cout << (score1 > score2 ? "1" : "2") << " " << abs(score1 - score2) << " ";

  return 0;
}