Br, Bc = map(int, input().split())
Dr, Dc = map(int, input().split())
Jr, Jc = map(int, input().split())

bessie = max(abs(Br - Jr), abs(Bc - Jc))
daisy = abs(Dr - Jr) + abs(Dc - Jc)

if bessie == daisy:
    print("tie")
elif bessie < daisy:
    print("bessie")
else:
    print("daisy")