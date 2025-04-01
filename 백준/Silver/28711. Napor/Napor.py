import re

n = int(input())

result = []
for _ in range(n):
    s = input()
    result.extend([int(i) for i in re.findall(r"\d+", s)])

for i in sorted(result):
    print(i)