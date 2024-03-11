from decimal import Decimal, getcontext
import sys
input = sys.stdin.readline
getcontext().prec = 50

n, b = map(int, input().split())
b = Decimal(b)

x = [0]*n
y = [0]*n
for i in range(n):
    x[i], y[i] = map(Decimal, input().split())

def f4(a):
    return sum((y[i] - a * x[i] - b) ** 4 for i in range(n))

a = Decimal(0)
step = Decimal(1)
for _ in range(50):
    if f4(a + step) < f4(a):
        while f4(a + step) < f4(a):
            a += step
    elif f4(a - step) < f4(a):
        while f4(a - step) < f4(a):
            a -= step
    else:
        step /= 10

print(a)