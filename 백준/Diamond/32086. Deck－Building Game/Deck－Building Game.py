def solve_test(N, A):
    MOD = 998244353
    if not A:
        return 0
    
    max_val = max(A)
    K = 1
    while K <= max_val:
        K *= 2
        
    freq = [0] * K
    for x in A:
        freq[x] += 1
        
    # FWHT
    def fwht(arr, inverse=False):
        n = len(arr)
        h = 1
        while h < n:
            for i in range(0, n, h * 2):
                for j in range(i, i + h):
                    x = arr[j]
                    y = arr[j + h]
                    if not inverse:
                        arr[j] = x + y
                        arr[j + h] = x - y
                    else:
                        arr[j] = (x + y) % MOD
                        arr[j + h] = (x - y) % MOD
            h *= 2
        
        if inverse:
            inv_n = pow(n, MOD - 2, MOD)
            for i in range(n):
                arr[i] = (arr[i] * inv_n) % MOD

    fwht(freq, inverse=False)
    
    P = [0] * K
    for j in range(K):
        H_j = freq[j]
        c0 = (N + H_j) // 2
        c1 = N - c0
        
        term1 = pow(3, c0, MOD)
        if c1 % 2 == 1:
            term2 = MOD - 1
        else:
            term2 = 1
            
        P[j] = (term1 * term2) % MOD
        
    fwht(P, inverse=True)
    return P[0]

N = int(input())
A = list(map(int, input().split()))
print(solve_test(N, A))