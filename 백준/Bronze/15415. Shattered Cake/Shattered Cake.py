W = int(input())
N = int(input())

result = 0
for _ in range(N):
    w, l = map(int, input().split())
    result += w * l

print(int(result / W))