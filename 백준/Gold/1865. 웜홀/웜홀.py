import sys
input = sys.stdin.readline

def bellman_ford():
    dist = [1e9] * (N + 1)
    dist[1] = 0

    for i in range(N):
        for S, E, T in graph:
            next = dist[S] + T
            if next < dist[E]:
                dist[E] = next
                if i == N - 1:
                    return True
    return False

TC = int(input())
for _ in range(TC):
    N, M, W = map(int, input().split())

    graph = []
    for _ in range(M):
        S, E, T = map(int, input().split())
        graph.append((S, E, T))
        graph.append((E, S, T))

    for _ in range(W):
        S, E, T = map(int, input().split())
        graph.append((S, E, -T))

    if bellman_ford():
        print("YES")
    else:
        print("NO")