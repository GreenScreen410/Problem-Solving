n = int(input())
w = list(map(int, input().split()))
if sum(w) % 3 == 0:
    print("yes")
else:
    print("no")