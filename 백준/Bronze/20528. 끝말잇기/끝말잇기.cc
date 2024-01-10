#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  char check = S[0];
  for (int i = 0; i < N - 1; i++) {
    cin >> S;

    if (S[0] != check && S[S.size() - 1] != check) {
      cout << "0";
      return 0;
    }
  }

  cout << "1";

  return 0;
}