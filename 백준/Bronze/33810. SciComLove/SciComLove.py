S = input()

count = 0
for i in range(10):
    if S[i] != "SciComLove"[i]:
        count += 1

print(count)