from math import *

while True:
    try:
        R, S = map(float, input().split())
        print(round((R * (S + 0.16) / 0.067) ** 0.5))
    except EOFError:
        break