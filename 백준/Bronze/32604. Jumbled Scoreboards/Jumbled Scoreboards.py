n = int(input())

previous_a, previous_b = 0, 0
for _ in range(n):
    a, b = map(int, input().split())
    if previous_a > a or previous_b > b:
        print("no")
        exit()
    previous_a, previous_b = a, b

print("yes")