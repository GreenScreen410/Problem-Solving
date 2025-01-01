T = int(input())

for x in range(1, T + 1):
    N = int(input())
    H = list(map(int, input().split()))
    
    peak = 0
    for i in range(1, N - 1):
        if H[i - 1] < H[i] > H[i + 1]:
            peak += 1
    
    print(f"Case #{x}: {peak}")