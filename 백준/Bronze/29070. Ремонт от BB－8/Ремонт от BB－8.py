import math
a, b, h, w = map(int, input().split())
print(math.ceil(h / a) * math.ceil(w / b))