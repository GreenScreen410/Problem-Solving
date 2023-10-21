#include <iostream>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;

  if (a >= b) cout << b;
  else cout << a + 1;
  
  return 0;
}