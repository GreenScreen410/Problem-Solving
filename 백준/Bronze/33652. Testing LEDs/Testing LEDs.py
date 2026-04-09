n = int(input())

time = None
for _ in range(n):
    m, o = map(int, input().split())
    
    if o == 0:
        if time is None or m < time:
            time = m

if time is not None:
    print(time)
else:
    print(-1)