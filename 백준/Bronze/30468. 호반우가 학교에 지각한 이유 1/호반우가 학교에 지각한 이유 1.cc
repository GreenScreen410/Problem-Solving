#include <iostream>
using namespace std;

int main() {
  int STR, DEX, INT, LUK, N;
  cin >> STR >> DEX >> INT >> LUK >> N;

  if (STR + DEX + INT + LUK >= N * 4) {
    cout << "0";
  } else {
    cout << N * 4 - (STR + DEX + INT + LUK);
  }

  return 0;
}