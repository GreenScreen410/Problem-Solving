#include <string>
using namespace std;

string solution(string my_string, int k) {
  string answer = "";
  while (k--) {
    answer += my_string;
  }
  
  return answer;
}