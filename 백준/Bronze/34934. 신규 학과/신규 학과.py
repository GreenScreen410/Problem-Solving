N = int(input())
for _ in range(N):
    name, year = input().split()
    if int(year) == 2026:
        print(name)
        break