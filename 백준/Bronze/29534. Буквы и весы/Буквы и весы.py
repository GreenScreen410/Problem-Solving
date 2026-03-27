n = int(input())
s = input()

if len(s) > n:
    print("Impossible")
else:
    print(sum(ord(c) - ord("a") + 1 for c in s))