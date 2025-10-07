T = int(input())
t = [int(input()) for _ in range(T)]

for i in t:
    if (i * 60 + 30) % 1500 < 1020:
        print("ONLINE")
    else:
        print("OFFLINE")