#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  while (N--) {
    string name, grade;
    int score;
    cin >> name >> score;
    
    if (97 <= score) grade = "A+";
    else if (90 <= score && score <= 96) grade = "A";
    else if (87 <= score && score <= 89) grade = "B+";
    else if (80 <= score && score <= 86) grade = "B";
    else if (77 <= score && score <= 79) grade = "C+";
    else if (70 <= score && score <= 76) grade = "C";
    else if (67 <= score && score <= 69) grade = "D+";
    else if (60 <= score && score <= 66) grade = "D";
    else grade = "F";
    
    cout << name << " " << grade << "\n";
  }
  
  return 0;
}