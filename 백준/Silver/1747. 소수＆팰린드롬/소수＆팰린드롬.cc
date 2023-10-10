#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

bool palindrome(string s) {
  string s1 = s;
  string s2 = s1;
  reverse(s2.begin(), s2.end());

  if (s1 == s2) return true;
  else return false;
}

bool prime(int n) {
  if (n < 2) return false;

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }

  return true;
}

int main() {
  int N;
  cin >> N;

  for (int i = N; i <= 10000000; i++) {
    if (palindrome(to_string(i)) && prime(i)) {
      cout << i << "\n";
      break;
    }
  }

  return 0;
}