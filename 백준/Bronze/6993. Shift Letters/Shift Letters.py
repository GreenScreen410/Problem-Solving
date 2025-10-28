t = int(input())
for _ in range(t):
    w, n = input().split()
    n = int(n)
    shifted = w[-n:] + w[:-n]
    print(f"Shifting {w} by {n} positions gives us: {shifted}")