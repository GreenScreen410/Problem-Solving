#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v(3);
  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  
  string S;
  cin >> S;
  
  for (int i = 0; i < 3; i++) {
    if (S[i] == 'A') cout << v[0] << " ";
    else if (S[i] == 'B') cout << v[1] << " ";
    else cout << v[2] << " ";
  }
  
  return 0;
}