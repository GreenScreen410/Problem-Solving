#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S == "fdsajkl;" || S == "jkl;fdsa")
    cout << "in-out";
  else if (S == "asdf;lkj" || S == ";lkjasdf")
    cout << "out-in";
  else if (S == "asdfjkl;")
    cout << "stairs";
  else if (S == ";lkjfdsa")
    cout << "reverse";
  else {
    cout << "molu";
  }

  return 0;
}