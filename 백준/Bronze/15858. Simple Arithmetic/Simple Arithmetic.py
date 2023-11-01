from decimal import Decimal
a, b, c = map(Decimal, input().split())
print("{:.6f}".format(a * b / c))