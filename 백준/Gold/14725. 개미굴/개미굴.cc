#include <iostream>
#include <set>
using namespace std;

int main() {
  int N;
  cin >> N;

  set<string> s;
  while (N--) {
    int K;
    cin >> K;

    string S = "";
    while (K--) {
      string t;
      cin >> t;
      S += "." + t;
      s.insert(S);
    }
  }

  for (auto i : s) {
    string S = i.substr(i.find_last_of(".") + 1);
    for (int j = 0; j < count(i.begin(), i.end(), '.') - 1; j++) {
      cout << "--";
    }
    cout << S << "\n";
  }

  return 0;
}