n, a, b = map(int, input().split())
w = [int(input()) for _ in range(n - 1)]

if a in w and b in w:
    print(" ".join(str(i) for i in range(a, b + 1)))
elif a in w and not b in w:
    print(b)
elif not a in w and b in w:
    print(a)
else:
    print(-1)