n = int(input())

pairs = []
for _ in range(n):
    l, m = map(int, input().split())
    pairs.append((l, m))
pairs.sort(key=lambda x: (x[0] / (2 ** x[1]), x[0]))

for l, m in pairs:
    print(l, m)