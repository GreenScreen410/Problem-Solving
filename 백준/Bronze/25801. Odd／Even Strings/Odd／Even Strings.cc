#include <iostream>
#include <vector>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  vector<int> check(26);
  for (int i = 0; i < S.size(); i++) {
    check[S[i] - 'a']++;
  }
  
  int odd = 0, even = 0;
  for (int i = 0; i < 26; i++) {
    if (check[i] != 0) {
      if (check[i] % 2 == 1) odd++;
      else even++;
    }
  }
  
  if (odd > even && even == 0) {
    cout << 1;
  } else if (odd < even && odd == 0) {
    cout << 0;
  } else {
    cout << "0/1";
  }
  
  return 0;
}