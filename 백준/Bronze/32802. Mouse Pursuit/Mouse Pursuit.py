n = int(input())

history = []
for _ in range(n):
    history.append(input().split())
history.sort(key=lambda x:x[1])

k = int(input())

c_total, g_total = 0, 0
for t, s, c, g in history:
    if t == "CAUGHT" and int(s) <= k:
        c_total += int(c)
        g_total += int(g)
    elif t == "MISS" and int(s) <= k:
        c_total -= int(c)
        g_total -= int(g)

print(c_total, g_total)