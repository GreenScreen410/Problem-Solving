A, B = map(int, input().split())
div, mod = divmod(A, B)
if A != 0 and mod < 0:
    div, mod = div + 1, mod - B
print(div)
print(mod)