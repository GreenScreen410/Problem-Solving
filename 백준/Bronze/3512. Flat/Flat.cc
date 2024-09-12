#include <iostream>
using namespace std;

int main() {
  int n, c;
  cin >> n >> c;
  
  double total = 0, balcony = 0, bedroom = 0;
  while (n--) {
    double n;
    string t;
    cin >> n >> t;
    
    if (t == "bedroom") bedroom += n;
    else if (t == "balcony") balcony += n;
    total += n;
  }
  
  cout << total << "\n";
  cout << bedroom << "\n";
  cout.precision(6);
  cout << fixed;
  cout << (total - balcony / 2) * c;
  
  return 0;
}