#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;
    
  for (int i = 0; i < str.size(); i++) {
    if (65 <= str[i] && str[i] <= 90) {
      cout << char(str[i] + 32);
    } else {
      cout << char(str[i] - 32);
    }
  }

  return 0;
}