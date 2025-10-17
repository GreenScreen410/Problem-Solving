n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

count_a = 0
count_b = 0
for i in range(n):
    for j in range(n):
        if a[i] > b[j]:
            count_a += 1
        elif a[i] < b[j]:
            count_b += 1

if count_a > count_b:
    print("first")
elif count_a < count_b:
    print("second")
else:
    print("tie")