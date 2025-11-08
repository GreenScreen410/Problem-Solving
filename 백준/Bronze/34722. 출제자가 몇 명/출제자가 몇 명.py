N = int(input())

count = 0
for _ in range(N):
    s, c, a, r = map(int, input().split())
    
    if s >= 1000 or c >= 1600 or a >= 1500 or (r != -1 and r <= 30):
        count += 1

print(count)