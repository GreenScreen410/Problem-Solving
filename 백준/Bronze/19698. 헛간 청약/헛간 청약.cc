#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N, W, H, L;
  cin >> N >> W >> H >> L;
  
  cout << ((W / L) * (H / L) > N ? N : (W / L) * (H / L));
  
  return 0;
}