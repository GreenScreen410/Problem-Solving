n = int(input())

drones = []
for i in range(1, n + 1):
    x, y = map(int, input().split())
    drones.append((max(abs(x), abs(y)), i))
drones.sort()

for i, (d, _) in enumerate(drones, start=1):
    if d < i:
        print(-1)
        exit()

for _, i in drones:
    print(i, end=" ")