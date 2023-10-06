#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int amount = 0;
  for (int i = 1; i <= N; i++) {
    amount += i * i * i;
  }

  cout << amount;
  
  return 0;
}