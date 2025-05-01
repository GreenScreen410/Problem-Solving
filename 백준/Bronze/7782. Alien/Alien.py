n = int(input())
b1, b2 = map(int, input().split())

found = False
for _ in range(n):
    lx, ly, hx, hy = map(int, input().split())

    if lx > hx:
        lx, hx = hx, lx
    if ly > hy:
        ly, hy = hy, ly

    if lx <= b1 <= hx and ly <= b2 <= hy:
        found = True
        break

if found:
    print("Yes")
else:
    print("No")