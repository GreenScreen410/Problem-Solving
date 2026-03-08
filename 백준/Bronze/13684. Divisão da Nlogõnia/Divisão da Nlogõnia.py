import sys
input = sys.stdin.readline

while True:
    K = int(input())
    if K == 0:
        break
    
    N, M = map(int, input().split())
    for _ in range(K):
        X, Y = map(int, input().split())
        if X == N or Y == M:
            print("divisa")
        elif X > N and Y > M:
            print("NE")
        elif X < N and Y > M:
            print("NO")
        elif X > N and Y < M:
            print("SE")
        else:
            print("SO")