#include <iostream>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  for (int i = 0; i < a.size(); i++) {
    cout << max(a[i] - '0', b[i] - '0');
  }

  return 0;
}