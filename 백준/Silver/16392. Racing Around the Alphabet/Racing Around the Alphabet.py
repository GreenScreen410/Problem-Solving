from math import pi

for _ in range(int(input())):
    s = input()
    
    dist = 0
    chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '"
    for i in range(len(s) - 1):
        diff = abs(chars.find(s[i]) - chars.find(s[i + 1]))
        dist += min(diff, 28 - diff)
    
    print((dist * 60 * pi / 28 / 15) + len(s))