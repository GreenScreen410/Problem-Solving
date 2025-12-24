import sys
from collections import defaultdict

n = int(input())

groups = defaultdict(int)
for i in range(n):
    l, r = 0, n
    le = gt = 0
    
    while l < r - 1:
        m = (l + r) // 2
        if i < m:
            r = m
            gt += 1
        else:
            l = m
            le += 1
            
    if i > 0: 
        le -= 1
        
    groups[(le, gt)] += 1

total = 0
for (le, gt), count in groups.items():
    total += count * pow(n, n - 1 - le - gt) * sum(pow(n - x, gt) * pow(x, le) for x in range(1, n + 1))

print(total)