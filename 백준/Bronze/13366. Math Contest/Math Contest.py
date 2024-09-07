from sys import stdin
input = stdin.readline

T = int(input())

for _ in range(T):
    x = input().strip()
    
    if sum(int(i) for i in x) % 9 == 0:
        print("YES")
    else:
        print("NO")