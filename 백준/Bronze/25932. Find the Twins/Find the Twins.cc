#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  while (n--) {
    vector<int> v(10);
    for (int i = 0; i < 10; i++) {
      cin >> v[i];
    }
    
    if (find(v.begin(), v.end(), 18) != v.end() && find(v.begin(), v.end(), 17) != v.end()) {
      for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
      }
      cout << "\nboth\n\n";
    } else if (find(v.begin(), v.end(), 18) != v.end()) {
      for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
      }
      cout << "\nmack\n\n";
    } else if (find(v.begin(), v.end(), 17) != v.end()) {
      for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
      }
      cout << "\nzack\n\n";
    } else {
      for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
      }
      cout << "\nnone\n\n";
    }
  }
  
  return 0;
}