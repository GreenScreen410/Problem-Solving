B = int(input())

for _ in range(B):
    S, n, f, m = map(int, input().split())
    if n + m <= S <= n * f + m:
        print("YES")
    else:
        print("NO")