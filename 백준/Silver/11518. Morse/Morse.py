import sys
input = sys.stdin.readline

morse = {}
for _ in range(26):
    c, code = input().split()
    morse[c] = code

N = int(input())
dict_morse = {}
for _ in range(N):
    word = input().strip()
    code = "".join(morse[c] for c in word)
    dict_morse[code] = word

while True:
    W = int(input())
    if W == 0:
        break
    codes = [input().strip() for _ in range(W)]
    
    result = []
    flag = True
    for c in codes:
        if c in dict_morse:
            result.append(dict_morse[c])
        else:
            print(c, "not in dictionary.")
            flag = False
            break
    
    if flag:
        print(" ".join(result))