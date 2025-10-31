n = int(input())
s = input()
for i in range(1, n):
    a, b = s[:i], s[i:]
    if a.count("L") != b.count("L") and a.count("O") != b.count("O"):
        print(i)
        break
else:
    print(-1)