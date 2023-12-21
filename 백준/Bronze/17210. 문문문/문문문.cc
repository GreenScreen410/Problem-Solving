#include <iostream>
using namespace std;

int main() {
  int N, door;
  cin >> N >> door;
  
  if (N > 5) {
    cout << "Love is open door";
  } else {
    for (int i = 0; i < N - 1; i++) {
      door ^= 1;
      cout << door << "\n";
    } 
  }
  
  return 0;
}