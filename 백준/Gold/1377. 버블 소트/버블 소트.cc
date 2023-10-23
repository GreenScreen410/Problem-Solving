#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // 데이터와 인덱스
    vector<pair<int, int>> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }
    
    sort(A.begin(), A.end());
    
    int MAX = 0;
    for (int i = 0; i < N; i++) {
        // 정렬 전 index - 정렬 후 index
        if (MAX < A[i].second - i) {
            MAX = A[i].second - i;
        }
    }
    
    cout << MAX + 1;

    return 0;
}