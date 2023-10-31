#include <iostream>
using namespace std;

int main() {
  string date;
  cin >> date;

  if (date <= "2023-09-16") {
    cout << "GOOD";
  } else {
    cout << "TOO LATE";
  }

  return 0;
}