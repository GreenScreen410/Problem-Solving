#include <bitset>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int M;
  cin >> M;

  bitset<21> S;
  while (M--) {
    string command;
    int x;
    cin >> command;

    if (command == "add") {
      cin >> x;
      S[x] = true;
    } else if (command == "remove") {
      cin >> x;
      S[x] = false;
    } else if (command == "check") {
      cin >> x;
      cout << (S[x] == true ? "1" : "0") << "\n";
    } else if (command == "toggle") {
      cin >> x;
      S[x] = !S[x];
    } else if (command == "all") {
      for (int i = 1; i <= 20; i++) {
        S[i] = true;
      }
    } else if (command == "empty") {
      S.reset();
    }
  }

  return 0;
}