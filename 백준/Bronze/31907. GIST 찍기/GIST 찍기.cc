#include <iostream>
using namespace std;

int main() {
  int K;
  cin >> K;
  
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < K; j++) {
      cout << "G";
    }
    for (int j = 0; j < K * 3; j++) {
      cout << ".";
    }
    cout << "\n";
  }
  
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < K; j++) {
      cout << ".";
    }
    for (int j = 0; j < K; j++) {
      cout << "I";
    }
    for (int j = 0; j < K; j++) {
      cout << ".";
    }
    for (int j = 0; j < K; j++) {
      cout << "T";
    }
    cout << "\n";
  }
  
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < K * 2; j++) {
      cout << ".";
    }
    for (int j = 0; j < K; j++) {
      cout << "S";
    }
    for (int j = 0; j < K; j++) {
      cout << ".";
    }
    cout << "\n";
  }
  
  return 0;
}