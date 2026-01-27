N = input()[::-1]
M = input()[::-1]

remain_N = ""
remain_M = ""
for i in range(max(len(N), len(M))):
    x = N[i] if i < len(N) else "0"
    y = M[i] if i < len(M) else "0"
    
    if x > y:
        remain_N += x
    elif y > x:
        remain_M += y
    else:
        if i < len(N):
            remain_N += x
        if i < len(M):
            remain_M += y

remain_N = remain_N[::-1]
remain_M = remain_M[::-1]
print(int(remain_N) if remain_N else "YODA")
print(int(remain_M) if remain_M else "YODA")