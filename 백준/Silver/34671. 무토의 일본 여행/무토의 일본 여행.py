import sys
input = sys.stdin.readline

N, M, Q = map(int, input().split())

roads = {}
for _ in range(M):
    a, b, c = map(int, input().split())
    if (a, b) in roads:
        roads[(a, b)] = min(roads[(a, b)], c)
        roads[(b, a)] = min(roads[(b, a)], c)
    else:
        roads[(a, b)] = c
        roads[(b, a)] = c

for _ in range(Q):
    s, e = map(int, input().split())
    print(roads.get((s, e), -1))