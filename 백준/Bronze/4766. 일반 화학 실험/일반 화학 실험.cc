#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<double> v;
  while (true) {
    double temperature;
    cin >> temperature;
    
    if (temperature == 999) break;
    v.push_back(temperature);
  }
  
  for (int i = 1; i < v.size(); i++) {
    cout.precision(2);
    cout << fixed;
    cout << v[i] - v[i - 1] << "\n";
  }
  
  return 0;
}