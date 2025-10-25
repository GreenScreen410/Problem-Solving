T = int(input())

for x in range(1, T + 1):
    A, B, K = map(int, input().split())
    
    count = 0
    for i in range(A):
        for j in range(B):
            if (i & j) < K:
                count += 1

    print(f"Case #{x}: {count}")