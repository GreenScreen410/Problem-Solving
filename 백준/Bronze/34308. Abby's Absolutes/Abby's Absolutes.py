from math import ceil

N, K = map(int, input().split())
amount = list(map(int, input().split()))

for i in amount:
    if ceil(N / 2) < i:
        print(N, end=" ")
    else:
        print(1, end=" ")