#include <iostream>
using namespace std;

int main() {
  int K;
  cin >> K;

  for (int i = 1; i <= K; i++) {
    int n, s, d;
    cin >> n >> s >> d;

    int result = 0;
    for (int j = 0, di, vi; j < n; j++) {
      cin >> di >> vi;
      if (s * d >= di) result += vi;
    }
    cout << "Data Set " << i << ":\n" << result << "\n" << "\n";
  }

  return 0;
}