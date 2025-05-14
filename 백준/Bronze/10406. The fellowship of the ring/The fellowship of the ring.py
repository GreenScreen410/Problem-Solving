W, N, P = map(int, input().split())
H = list(map(int, input().split()))

count = 0
for i in H:
    if W <= i and N >= i:
        count += 1

print(count)