#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int kbs1, kbs2;
  for (int i = 0; i < N; i++) {
    string channel;
    cin >> channel;
    
    if (channel == "KBS1") kbs1 = i;
    else if (channel == "KBS2") kbs2 = i;
  }
  
  for (int i = 0; i < kbs1; i++) {
    cout << "1";
  }
  for (int i = 0; i < kbs1; i++) {
    cout << "4";
  }
  
  if (kbs1 > kbs2) kbs2++;
  
  for (int i = 0; i < kbs2; i++) {
    cout << "1";
  }
  for (int i = 0; i < kbs2 - 1; i++) {
    cout << "4";
  }
  
  return 0;
}