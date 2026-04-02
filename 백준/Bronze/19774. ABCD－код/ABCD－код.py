t = int(input())
for _ in range(t):
    code = input()
    AB = int(code[:2])
    CD = int(code[2:])
    if (AB * AB + CD * CD) % 7 == 1:
        print("YES")
    else:
        print("NO")