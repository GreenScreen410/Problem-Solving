#include <iostream>
using namespace std;

int main() {
  string k;
  cin >> k;

  int answer = 0;
  for (int i = 0; i < k.length(); i++) {
    if (k[i] == '0') answer++;
  }

  for (int i = k.length() - 1; i > 0; i--) {
    if (k[i] == '0') {
      answer--;
    } else {
      break;
    }
  }

  cout << answer;

  return 0;
}