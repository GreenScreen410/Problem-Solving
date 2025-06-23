k = int(input())
n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)

flag = False
for i in a:
    if total_sum - i >= k:
        flag = True
        break

if flag:
    print("YES")
else:
    print("NO")