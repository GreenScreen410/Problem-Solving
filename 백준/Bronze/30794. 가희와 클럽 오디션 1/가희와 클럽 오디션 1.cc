#include <iostream>
using namespace std;

int main() {
  int lv;
  string judge;
  cin >> lv >> judge;

  if (judge == "miss") {
    cout << lv * 0;
  } else if (judge == "bad") {
    cout << lv * 200;
  } else if (judge == "cool") {
    cout << lv * 400;
  } else if (judge == "great") {
    cout << lv * 600;
  } else {
    cout << lv * 1000;
  }

  return 0;
}