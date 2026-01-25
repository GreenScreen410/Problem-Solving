import math

N = int(input())
S = input()

c = S.count("C")
others = N - c
if others == 0:
    print(c)
else:
    print(math.ceil(c / (others + 1)))