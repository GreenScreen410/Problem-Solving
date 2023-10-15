#include <iostream>
using namespace std;

int main() {
  int n, h, v;
  cin >> n >> h >> v;
  
  cout << max(max(max(h * v * 4, (n - h) * v * 4), h * (n - v) * 4), (n - h) * (n - v) * 4);
  
  return 0;
}