n = int(input())
x, y = map(int, input().split())

min_u = x + y
max_u = x + y
min_v = x - y
max_v = x - y

for _ in range(n - 1):
    x, y = map(int, input().split())

    u = x + y
    v = x - y

    if u < min_u:
        min_u = u
    if u > max_u:
        max_u = u
    if v < min_v:
        min_v = v
    if v > max_v:
        max_v = v

width = max_u - min_u
height = max_v - min_v

if n > 1:
    if width == 0:
        width = 1
    if height == 0:
        height = 1

print(width + height + 4)