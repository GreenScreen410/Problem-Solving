#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<string> contact(N);
  for (int i = 0; i < N; i++) {
    cin >> contact[i];
  }
  
  int M;
  cin >> M;
  
  vector<string> email(M);
  int count = 0;
  for (int i = 0; i < M; i++) {
    cin >> email[i];
    
    if (find(contact.begin(), contact.end(), email[i]) != contact.end()) {
      count++;
    }
  }
  
  cout << count;
  
  return 0;
}