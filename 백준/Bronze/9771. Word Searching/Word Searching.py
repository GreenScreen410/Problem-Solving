word = input()

count = 0
try:
    while True:
        line = input().split()
        for i in line:
            if word in i:
                count += 1
except EOFError:
    print(count)