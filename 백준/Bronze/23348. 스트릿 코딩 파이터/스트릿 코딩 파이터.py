A, B, C = map(int, input().split())
N = int(input())

score = []
for _ in range(N):
    
    x = 0
    for _ in range(3):
        a, b, c = map(int, input().split())
        x += A * a + B * b + C * c
    score.append(x)
    
print(max(score))