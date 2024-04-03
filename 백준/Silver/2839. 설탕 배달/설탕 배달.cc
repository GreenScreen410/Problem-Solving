#include <iostream>

using namespace std;

int main() {
    int N = 0;
    int count = 0;
    cin >> N;
    
    while (N >= 0) {
        // 5kg으로 나눌 수 있을 때
        if (N % 5 == 0) {
            count += (N / 5);
            cout << count;
            return 0;
        }
        
        else {
            // 3kg 가방 하나 추가
            count++;
            N -= 3;
        }
    }
    
    cout << "-1";

    return 0;
}