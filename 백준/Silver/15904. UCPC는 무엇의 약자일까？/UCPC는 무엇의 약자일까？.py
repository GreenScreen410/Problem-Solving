S = input()

UCPC = "UCPC"
index = 0
for i in S:
    if i == UCPC[index]:
        index += 1
    if index == 4:
        print("I love UCPC")
        break
else:
    print("I hate UCPC")