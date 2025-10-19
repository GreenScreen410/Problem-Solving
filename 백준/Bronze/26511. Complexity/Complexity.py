from collections import Counter

n = int(input())
for _ in range(n):
    s = input()
    unique = set(s)
    if len(unique) <= 2:
        print(0)
    else:
        print(len(s) - sum(sorted(Counter(s).values(), reverse=True)[:2]))