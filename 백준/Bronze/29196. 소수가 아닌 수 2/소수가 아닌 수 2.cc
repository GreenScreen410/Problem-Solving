#include <iostream>
using namespace std;

int main() {
  double k;
  cin >> k;
  
  cout << "YES\n";
  cout << static_cast<int> (100000000 * k) << " " << 100000000;

  return 0;
}