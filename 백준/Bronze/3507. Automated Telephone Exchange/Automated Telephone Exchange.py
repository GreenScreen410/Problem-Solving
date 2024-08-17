N = int(input())

lucky = 200 - N - 1
if lucky < 0:
    print(0)
else:
    print(lucky)