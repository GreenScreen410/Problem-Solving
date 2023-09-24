#include <vector>
using namespace std;

int solution(int n) {
  vector<int> F = {0, 1};
  for (int i = 2; i <= n; i++) {
    F.push_back((F[i - 1] + F[i - 2]) % 1234567);
  }    

  int answer = F[n];
  return answer;
}