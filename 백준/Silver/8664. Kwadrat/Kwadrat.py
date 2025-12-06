points = [tuple(map(int, input().split())) for _ in range(4)]
xs = sorted(set(x for x, y in points))
ys = sorted(set(y for x, y in points))
if len(xs) == 2 and len(ys) == 2 and (xs[1] - xs[0]) == (ys[1] - ys[0]):
    if set(points) == {(xs[0], ys[0]), (xs[0], ys[1]), (xs[1], ys[0]), (xs[1], ys[1])}:
        print("TAK")
    else:
        print("NIE")
else:
    print("NIE")