n = int(input())
me = input()
guile = input()

my_wins = 0
guile_wins = 0
for i in range(n):
    m = me[i]
    g = guile[i]
    
    if m == g:
        continue
    
    if (m == "R" and g == "S") or (m == "S" and g == "P") or (m == "P" and g == "R"):
        my_wins += 1
    else:
        guile_wins += 1

if my_wins > guile_wins:
    print("victory")
else:
    print("defeat")