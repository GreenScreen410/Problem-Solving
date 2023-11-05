#include <iostream>
using namespace std;

int main() {
  int STR, DEX, INT, LUK, N;
  cin >> STR >> DEX >> INT >> LUK >> N;

  int count = 0;
  if (STR + DEX + INT + LUK < N * 4) {
    while (STR + DEX + INT + LUK < N * 4) {
      if (STR <= DEX && STR <= INT && STR <= LUK) {
        STR++;
      } else if (DEX <= STR && DEX <= INT && DEX <= LUK) {
        DEX++;
      } else if (INT <= STR && INT <= DEX && INT <= LUK) {
        INT++;
      } else if (LUK <= STR && LUK <= DEX && LUK <= INT) {
        LUK++;
      }
      count++;
    }
  }

  cout << count;

  return 0;
}