n = int(input())
s = input()

count = 0
coffee = 0
for i in s:
    if i == "1":
        coffee = 2
        count += 1
    else:
        if coffee > 0:
            coffee -= 1
            count += 1

print(count)