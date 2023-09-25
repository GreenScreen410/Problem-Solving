n = int(input())
a = list(map(int, input().split()))

value = 1
for i in range(n):
    value *= a[i]

answer = []
for i in range(n):
    try:
        x = a[i]
        y = value // a[i]

        if x > y:
            answer.append(i + 1)
            break
        elif x < y:
            answer.extend([j + 1 for j in range(n) if i != j])
            break
    except ZeroDivisionError:
        print("Impossible")
        exit(0)

if len(answer) == 0:
    print("Impossible")
else:
    print(len(answer))
    print(*answer)