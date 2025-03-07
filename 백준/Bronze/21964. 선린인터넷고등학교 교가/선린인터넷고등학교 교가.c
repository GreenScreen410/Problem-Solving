#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char S[100000];
    scanf("%s", S);
    
    for(int i = N - 5; i < N; i++) {
        printf("%c", S[i]);
    }
    
    return 0;
}