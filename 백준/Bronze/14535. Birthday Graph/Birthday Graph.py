months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]

x = 1
while True:
    N = int(input())
    if N == 0:
        break
    
    counts = [0] * 12
    for _ in range(N):
        d, m, y = input().split()
        m = int(m)
        counts[m - 1] += 1
    
    print(f"Case #{x}:")
    for i in range(12):
        print(f"{months[i]}:{'*' * counts[i]}")
    
    x += 1