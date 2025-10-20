b, d, c, l = map(int, input().split())

found = False
for x in range(l + 1):
    for y in range(l + 1):
        for z in range(l + 1):
            if b * x + d * y + c * z == l:
                print(x, y, z)
                found = True

if not found:
    print("impossible")