#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a;
    cin >> a;
    
    cout << fixed;
    cout.precision(6);
    cout << sqrt(a) * 4;
    
    return 0;
}