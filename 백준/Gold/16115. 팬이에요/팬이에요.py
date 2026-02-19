import math

N = int(input())
points = [list(map(int, input().split())) for _ in range(N)]

r2 = max(x * x + y * y for x, y in points)
angles = sorted(math.atan2(y, x) for x, y in points if x * x + y * y == r2)

gaps = [angles[i + 1] - angles[i] for i in range(len(angles) - 1)]
gaps.append(2 * math.pi - (angles[-1] - angles[0]))

print(max(gaps) * 180 / math.pi)