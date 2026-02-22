import math
R, C, W = map(int, input().split())
sum = 0
for i in range(W):
    for j in range(i + 1):
        sum += math.comb(R + i - 1, C + j - 1)
print(sum)