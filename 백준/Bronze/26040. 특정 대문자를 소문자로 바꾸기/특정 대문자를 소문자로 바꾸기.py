A = input()
B = list(input().split())

for i in A:
    if i in B:
        print(i.swapcase(), end='')
    else:
        print(i, end='')