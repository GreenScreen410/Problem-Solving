#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if (A <= C && C < B) cout << "1";
  else cout << "0";
  
  return 0;
}