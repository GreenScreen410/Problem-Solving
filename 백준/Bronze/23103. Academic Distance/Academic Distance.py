N = int(input().strip())
coords = [tuple(map(int, input().split())) for _ in range(N)]

total = 0
for i in range(N - 1):
    x1, y1 = coords[i]
    x2, y2 = coords[i + 1]
    total += abs(x1 - x2) + abs(y1 - y2)

print(total)