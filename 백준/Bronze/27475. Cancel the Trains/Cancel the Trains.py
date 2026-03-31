t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    bottom = set(map(int, input().split()))
    left = set(map(int, input().split()))
    print(len(bottom & left))