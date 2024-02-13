#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  while (N--) {
    string name;
    cin >> name;
    
    if (name == "anj") {
      cout << "뭐야;";
      return 0;
    }
  }
  
  cout << "뭐야?";
  
  return 0;
}