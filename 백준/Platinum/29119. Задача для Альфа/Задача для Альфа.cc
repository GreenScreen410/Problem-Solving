#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool compare(string a, string b) {
  return a + b > b + a;
}

int main() {
  int N;
  cin >> N;
  
  vector<string> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), compare);
  
  for (int i = 0; i < N; i++) {
    cout << v[i] << " ";
  }
  
  return 0;
}