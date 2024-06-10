T = int(input())

for i in range(1, T + 1) :
    gandalf = list(map(int, input().split()))
    sauron = list(map(int, input().split()))
    
    gandalf_score = gandalf[0] + gandalf[1] * 2 + (gandalf[2] + gandalf[3]) * 3 + gandalf[4] * 4 + gandalf[5] * 10
    sauron_score = sauron[0] + (sauron[1] + sauron[2] + sauron[3]) * 2 + sauron[4] * 3 + sauron[5] * 5 + sauron[6] * 10
    
    if gandalf_score > sauron_score:
        print(f"Battle {i}: Good triumphs over Evil")
    elif gandalf_score < sauron_score:
        print(f"Battle {i}: Evil eradicates all trace of Good")
    else:
        print(f"Battle {i}: No victor on this battle field")