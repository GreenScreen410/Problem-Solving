N = int(input())

total = 0
for _ in range(N):
    students, apples = map(int, input().split())
    total += apples % students

print(total)