for _ in range(int(input())):
    data = list(map(int, input().split()))
 
    count = {}
    for i in data[2::2]:
        count[i] = count.get(i, 0) + 1
    print(max(count.values()))