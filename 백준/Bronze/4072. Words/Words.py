while 1:
    l = input()
    if l == "#":
        break
    print(" ".join(i[::-1] for i in l.split()))