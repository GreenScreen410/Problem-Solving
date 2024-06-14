#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool compare(string a, string b) {
  return a + b > b + a;
}

int main() {
  vector<string> v;
  string n;
  while (cin >> n) {
    v.push_back(n);
  }
  sort(v.begin(), v.end(), compare);
  
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  
  return 0;
}