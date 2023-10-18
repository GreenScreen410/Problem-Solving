#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  while (N--) {
    int M;
    cin >> M;
    
    if (M < 250) {
      cout << "4 ";
    } else if (250 <= M && M < 275) {
      cout << "3 ";
    } else if (275 <= M && M < 300) {
      cout << "2 ";
    } else {
      cout << "1 ";
    }
  }
  
  return 0;
}