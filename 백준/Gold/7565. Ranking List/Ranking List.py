scenarios = int(input())

for _ in range(scenarios):
    n = int(input())
    teams = [input().strip() for _ in range(n)]
    k, m = map(int, input().split())
    
    info = {team: {"solved": 0, "time": 0, "problems": {i: {"solved": False, "wrong": 0} for i in range(1, k + 1)}} for team in teams}
    
    for _ in range(m):
        problem, t, correctness, team = input().split()
        problem, t = int(problem), int(t)
        state = info[team]["problems"][problem]
        
        if correctness == "Yes":
            if not state["solved"]:
                state["solved"] = True
                info[team]["solved"] += 1
                info[team]["time"] += t + state["wrong"] * 20
        else:
            if not state["solved"]:
                state["wrong"] += 1
    
    ranking = sorted(teams, key=lambda team: (-info[team]["solved"], info[team]["time"], team))

    rank = 1
    prev_solved, prev_time = None, None
    for i, team in enumerate(ranking):
        solved, time = info[team]["solved"], info[team]["time"]
        if prev_solved == solved and prev_time == time:
            pass
        else:
            rank = i + 1
        print(f"{rank:2d}. {team:<8} {solved:1d} {time:4d}")
        prev_solved, prev_time = solved, time
    
    print()