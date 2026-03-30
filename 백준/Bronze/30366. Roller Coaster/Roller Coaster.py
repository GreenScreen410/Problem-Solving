n, m = map(int, input().split())
a = list(map(int, input().split()))

time = 0
size = m
for i in a:
    if size < i:
        time += 1
        size = m
    
    print(time)
    
    size -= i