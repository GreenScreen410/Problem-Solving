import math

I = int(input())

result = 0
for d in range(1, int(math.isqrt(I)) + 1):
    if I % d == 0:
        result += d
        if d != I // d:
            result += I // d

print(result)