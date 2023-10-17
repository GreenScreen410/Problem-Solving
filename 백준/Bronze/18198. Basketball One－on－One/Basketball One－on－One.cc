#include <iostream>
#include <string>
using namespace std;

int main() {
  string score;
  cin >> score;

  int A = 0, B = 0;
  for (int i = 0; i < score.size(); i += 2) {
    if (score[i] == 'A') A += score[i + 1] - '0';
    else B += score[i + 1] - '0';
  }

  cout << (A > B ? "A" : "B");

  return 0;
}