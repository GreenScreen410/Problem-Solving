N = int(input())
yesterday = input()
today = input()

count = 0
for i in range(N):
    if yesterday[i] == "C" and today[i] == "C":
        count += 1

print(count)