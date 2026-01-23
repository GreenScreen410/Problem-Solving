group = 1
while True:
    n = int(input())
    if n == 0:
        break
    
    papers = []
    for _ in range(n):
        papers.append(input().split())
    
    names = [p[0] for p in papers]
    nasties = []
    for i in range(n):
        owner = names[i]
        msgs = papers[i][1:]
        
        for j, msg in enumerate(msgs):
            if msg == "N":
                nasties.append(f"{names[(i - j - 1) % n]} was nasty about {owner}")
    
    print(f"Group {group}")
    if nasties:
        for line in nasties:
            print(line)
    else:
        print("Nobody was nasty")
    print()
    
    group += 1