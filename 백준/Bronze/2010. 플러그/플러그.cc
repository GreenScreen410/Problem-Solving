#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  int result = 1;
  while (N--) {
    int plug;
    cin >> plug;
    result += plug - 1;
  }

  cout << result;

  return 0;
}