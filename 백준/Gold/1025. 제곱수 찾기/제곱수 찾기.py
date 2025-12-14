import math

N, M = map(int, input().split())
A = [input() for _ in range(N)]

result = -1
for i in range(N):
    for j in range(M):
        for dx in range(-N, N + 1):
            for dy in range(-M, M + 1):
                if dx == 0 and dy == 0:
                    continue
                
                x, y = i, j
                
                num_str = ""
                while 0 <= x < N and 0 <= y < M:
                    num_str += A[x][y]
                    num = int(num_str)
                    root = int(math.isqrt(num))
                    
                    if root * root == num:
                        result = max(result, num)
                    x += dx
                    y += dy

print(result)