def overlap(a, b):
    for i in range(len(a), 0, -1):
        if a[-i:] == b[:i]:
            return i
    return 0

n = int(input())
for _ in range(n):
    k, w = map(int, input().split())
    words = [input() for _ in range(w)]
    
    total = k
    for i in range(1, w):
        total += k - overlap(words[i - 1], words[i])
    
    print(total)