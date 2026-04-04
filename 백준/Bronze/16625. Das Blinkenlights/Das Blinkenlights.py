import math

p, q, s = map(int, input().split())
if p * q // math.gcd(p, q) <= s:
    print("yes")
else:
    print("no")