mice = list(map(int, input().split()))
mice.sort()
print(sum(mice) - mice[0] + 1)