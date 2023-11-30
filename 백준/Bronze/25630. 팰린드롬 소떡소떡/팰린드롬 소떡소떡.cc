#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  int count = 0;
  for (int i = 0; i < N / 2; i++) {
    if (S[i] != S[N - i - 1]) {
      count++;
    }
  }

  cout << count;

  return 0;
}