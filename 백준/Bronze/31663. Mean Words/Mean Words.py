N = int(input())
words = [input() for _ in range(N)]

result = ""
for i in range(max(len(s) for s in words)):
    s = [s[i] for s in words if i < len(s)]
    result += chr(int(sum(ord(c) for c in s) / len(s)))

print(result)