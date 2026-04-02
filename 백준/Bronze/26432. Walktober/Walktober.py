T = int(input())
for x in range(1, T + 1):
    M, N, P = map(int, input().split())
    scores = [list(map(int, input().split())) for _ in range(M)]
    
    john = scores[P - 1]
    total = 0
    for day in range(N):
        total += max(0, max(scores[i][day] for i in range(M)) - john[day])
    
    print(f"Case #{x}: {total}")