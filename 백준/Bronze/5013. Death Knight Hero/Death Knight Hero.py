n = int(input())

count = 0
for _ in range(n):
    ki = input()
    
    win = True
    for i in range(1, len(ki)) :
        if ki[i - 1] == "C" and ki[i] == "D":
            win = False
    if win:
        count += 1

print(count)