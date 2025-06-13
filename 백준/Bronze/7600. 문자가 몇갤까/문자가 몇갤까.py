while True:
    line = input()
    if line == "#":
        break
    
    result = [0] * 26
    for i in line.lower():
        if i.isalpha():
            result[ord(i) - 97] = 1
    print(result.count(1))