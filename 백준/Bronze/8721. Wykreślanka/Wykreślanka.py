n = int(input())
a = list(map(int, input().split()))

need = 1
count = 0
for x in a:
    if x == need:
        count += 1
        need += 1

print(n - count)