from sys import stdin
input = stdin.readline

T = int(input())
for n in range(1, T + 1):
    N = int(input())
    categories = list(map(int, input().split()))
    
    s_len = len(set(categories))
    s = set()
    count = 0
    for category in categories:
        count += 1
        s.add(category)
        
        if len(s) == s_len:
            print(f"Case {n}: {count}")
            break