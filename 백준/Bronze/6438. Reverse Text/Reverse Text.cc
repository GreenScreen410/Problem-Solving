#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  cin.ignore();
  while (N--) {
    string S;
    getline(cin, S);
    
    reverse(S.begin(), S.end());
    
    cout << S << "\n";
  }
  
  return 0;
}