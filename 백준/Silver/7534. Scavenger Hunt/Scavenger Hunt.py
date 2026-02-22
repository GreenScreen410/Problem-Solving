import sys
input = sys.stdin.readline

T = int(input())
for i in range(1, T + 1):
    S = int(input())
    
    next_step = {}
    all_steps = set()
    has_prev = set()
    for _ in range(S - 1):
        a, b = input().split()
        next_step[a] = b
        all_steps.add(a)
        all_steps.add(b)
        has_prev.add(b)
        
    print(f"Scenario #{i}:")
    cur = (all_steps - has_prev).pop()
    for _ in range(S):
        print(cur)
        cur = next_step.get(cur)
        
    print()