#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> photo(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> photo[i][j];

      if (photo[i][j] == 'W') {
        photo[i][j] = 'B';
      } else {
        photo[i][j] = 'W';
      }
    }
  }

  int count = 0;
  vector<vector<char>> original(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> original[i][j];

      if (photo[i][j] != original[i][j]) {
        count++;
      }
    }
  }

  cout << count;

  return 0;
}