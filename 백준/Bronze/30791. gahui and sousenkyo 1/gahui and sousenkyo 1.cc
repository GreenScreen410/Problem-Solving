#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vote(5);
  for (int i = 0; i < 5; i++) {
    cin >> vote[i];
  }

  int count = 0;
  for (int i = 1; i < 5; i++) {
    if (vote[0] - vote[i] <= 1000) {
      count++;
    }
  }

  cout << count;

  return 0;
}