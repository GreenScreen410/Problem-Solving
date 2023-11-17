#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> v;
  for (int i = 1; i <= N; i++) {
    if (to_string(i)[to_string(i).size() - 1] != to_string(K)[to_string(K).size() - 1] && to_string(i)[to_string(i).size() - 1] != to_string(2 * K)[to_string(2 * K).size() - 1]) {
      v.push_back(i);
    }
  }

  cout << v.size() << "\n";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}