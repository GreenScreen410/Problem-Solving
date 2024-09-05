n = int(input())
gahui = int(input())
votes = list(map(int, input().split()))

count = 1
for i in votes:
    if gahui < i:
        count += 1
        
print(count) 