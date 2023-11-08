n = int(input())

for i in range(1, n + 1):
    a, b, c = map(int, input().split())
    a, b, c = sorted([a, b, c])

    if a ** 2 + b ** 2 == c ** 2:
        print(f'Scenario #{i}:\nyes\n')
    else:
        print(f'Scenario #{i}:\nno\n')