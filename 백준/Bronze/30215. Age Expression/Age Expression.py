a, b, c = map(int, input().split())
for i in range(1, a // b + 1):
    if (a - i * b) % c == 0 and (a - i * b) > 0:
        print(1)
        break
else:
    print(0)