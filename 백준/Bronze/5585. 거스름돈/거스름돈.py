C = 1000 - int(input())

count = 0
for i in [500, 100, 50, 10, 5, 1]:
    count += C // i
    C %= i

print(count)