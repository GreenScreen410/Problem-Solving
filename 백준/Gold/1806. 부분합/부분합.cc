#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, S;
    cin >> N >> S;
    
    vector<int> s(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    
    int p1 = 0, p2 = 0, sum = 0, shortest = 1e9;
    while (p1 <= p2) {
        if (sum >= S) {
            shortest = min(shortest, p2 - p1);
            sum -= s[p1++];
        }
        else if (p2 == N) {
            break;
        }
        else {
            sum += s[p2++];
        }
    }
    
    if (shortest == 1e9) {
        cout << 0;
    }
    else {
        cout << shortest;
    }
    
    return 0;
}