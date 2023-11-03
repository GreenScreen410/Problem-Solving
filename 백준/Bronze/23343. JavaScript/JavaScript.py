try:
    x, y = map(int, input().split())
    print(x - y)
except ValueError:
    print("NaN")