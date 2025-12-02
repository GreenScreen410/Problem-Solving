N = int(input())
W = [input().strip() for _ in range(N)]
K = int(input())

score = [0] * 36
total = 0
for w in W:
    total += int(w, 36)
    for i, c in enumerate(w[::-1]):
        score[int(c, 36)] += (35 - int(c, 36)) * 36**i
total += sum(sorted(score)[36 - K :])

r = ""
while total:
    total, m = divmod(total, 36)
    r += "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[m]
print(r[::-1] or "0")