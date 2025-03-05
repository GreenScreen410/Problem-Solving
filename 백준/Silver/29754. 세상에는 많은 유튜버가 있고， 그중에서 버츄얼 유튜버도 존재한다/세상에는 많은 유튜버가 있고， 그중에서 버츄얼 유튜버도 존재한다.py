from collections import defaultdict

N, M = map(int, input().split())
total_weeks = M // 7

youtubers = defaultdict(lambda: defaultdict(lambda: {"count": 0, "hours": 0.0}))

for _ in range(N):
    name, day, start, end = input().split()
    day = int(day)
    week = (day - 1) // 7 + 1
    
    sh, sm = map(int, start.split(":"))
    eh, em = map(int, end.split(":"))
    duration = (eh * 60 + em - sh * 60 - sm) / 60.0
    
    youtubers[name][week]["count"] += 1
    youtubers[name][week]["hours"] += duration

result = []
for name in youtubers:
    is_valid = True
    
    for week in range(1, total_weeks + 1):
        if week not in youtubers[name]:
            is_valid = False
            break
        
        week_data = youtubers[name][week]
        if week_data["count"] < 5 or week_data["hours"] < 60:
            is_valid = False
            break
    
    if is_valid:
        result.append(name)

if not result:
    print(-1)
else:
    for name in sorted(result):
        print(name)