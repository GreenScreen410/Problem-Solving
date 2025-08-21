from sys import stdin
from collections import Counter
from itertools import takewhile

s = Counter(takewhile(lambda name: name != "***", (line for line in stdin)))

result = s.most_common(2)
if len(result) == 1 or result[0][1] > result[1][1]:
    print(result[0][0])
else:
    print("Runoff!")