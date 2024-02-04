#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    string data;
    cin >> data;
    
    int error = 0;
    for (int i = 0; i < data.size(); i += 8) {
      int one = count(data.begin() + i, data.begin() + i + 7, '1');
      if (one % 2 == 0 && data[i + 7] == '1' || one % 2 != 0 && data[i + 7] == '0') error++;
    }
    cout << error << "\n";
  }
  
  return 0;
}