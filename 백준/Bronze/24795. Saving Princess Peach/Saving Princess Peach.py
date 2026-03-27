N, Y = map(int, input().split())

found = set()
for _ in range(Y):
    k = int(input())
    found.add(k)

for i in range(N):
    if i not in found:
        print(i)

print(f"Mario got {len(found)} of the dangerous obstacles.")