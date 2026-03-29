r, f = map(int, input().split())

t = ((180 * f) / r) % 360
if t < 90 or t > 270:
    print("up")
else:
    print("down")