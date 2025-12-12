N = int(input().strip())
A = list(map(int, input().split()))
B, C = map(int, input().split())

total = 0
for i in A:
    total += 1
    remain = i - B
    if remain > 0:
        total += (remain + C - 1) // C

print(total)