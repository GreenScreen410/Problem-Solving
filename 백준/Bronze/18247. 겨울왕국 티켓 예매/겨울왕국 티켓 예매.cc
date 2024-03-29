#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> seat(N, vector<int>(M));
    int seat_number = 1;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        seat[i][j] = seat_number;
        seat_number++;
      }
    }
    
    if (N < 12 || M < 4) {
      cout << "-1\n";
    } else {
      cout << seat[11][3] << "\n";
    }
  }
  
  return 0;
}