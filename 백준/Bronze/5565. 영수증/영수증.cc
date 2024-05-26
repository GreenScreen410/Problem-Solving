#include <iostream>
using namespace std;

int main() {
  int first;
  cin >> first;
  
  int sum = 0;
  for (int i = 0; i < 9; i++) {
    int book;
    cin >> book;
    sum += book;
  }
  
  cout << first - sum;
  
  return 0;
}