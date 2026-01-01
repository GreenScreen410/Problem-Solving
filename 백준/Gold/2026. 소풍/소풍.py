K, N, F = map(int, input().split())
friends = [list() for _ in range(N + 1)]

for _ in range(F):
    a, b = map(int, input().split())
    friends[a].append(b)
    friends[b].append(a)

def dfs(path, start):
    if len(path) == K:
        for x in path:
            print(x)
        exit(0)
        
    for i in range(start + 1, N + 1):
        if all(i in friends[p] for p in path):
            dfs(path + [i], i)

for i in range(1, N + 1):
    dfs([i], i)

print(-1)