n, c = map(int, input().split())

total = 0
for _ in range(n):
    m, s = map(int, input().split(":"))
    total += m * 60 + s

if n > 1:
    total -= (n - 1) * c
print(f"{total // 3600:02d}:{(total % 3600) // 60:02d}:{total % 60:02d}")