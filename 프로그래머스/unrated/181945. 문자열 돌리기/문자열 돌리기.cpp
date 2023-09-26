#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;
    
  for (int i = 0; i < str.size(); i++) {
    cout << str[i] << "\n";
  }

  return 0;
}