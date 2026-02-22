import sys
input = sys.stdin.readline

T = int(input())
for x in range(1, T + 1):
    N = int(input())
    
    next_city = {}
    sources = set()
    destinations = set()
    for _ in range(N):
        a = input().strip()
        b = input().strip()
        next_city[a] = b
        sources.add(a)
        destinations.add(b)
        
    start = (sources - destinations).pop()
    
    itinerary = []
    cur = start
    for _ in range(N):
        nxt = next_city[cur]
        itinerary.append(f"{cur}-{nxt}")
        cur = nxt
    
    print(f"Case #{x}: {" ".join(itinerary)}")