N = int(input())

for _ in range(N):
    S = input()

    upper_count = 0
    lower_count = 0
    for c in S:
        if "A" <= c <= "Z":
            upper_count += 1
        elif "a" <= c <= "z":
            lower_count += 1
    
    condition1 = (upper_count <= lower_count)
    condition2 = (len(S) <= 10)
    condition3 = False
    for c in S:
        if not ('0' <= c <= '9'):
            condition3 = True
            break

    if condition1 and condition2 and condition3:
        print(S)
        break