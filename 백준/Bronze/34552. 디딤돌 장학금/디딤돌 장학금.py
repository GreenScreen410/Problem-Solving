M = list(map(int, input().split()))
N = int(input())

total = 0
for _ in range(N):
    B, L, S = input().split()
    B = int(B)
    L = float(L)
    S = int(S)
    
    if S >= 17 and L >= 2.0:
        total += M[B]

print(total)