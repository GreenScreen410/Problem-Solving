#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
    
  int frequency = 0;
  for (int i = 1; i <= n; i++) {
    string number = to_string(i);
    frequency += count(number.begin(), number.end(), '0' + d);
  }
  
  cout << frequency;
    
  return 0;
}