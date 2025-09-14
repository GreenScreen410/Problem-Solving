n = int(input())

scores = {}
for _ in range(n):
    s_i = input()
    scores[s_i] = 0

m = int(input())

prev_a, prev_b = 0, 0
for _ in range(m):
    record = input().split()
    score_part = record[0]
    t_i = record[1]

    a_i, b_i = map(int, score_part.split(":"))
    points = (a_i + b_i) - (prev_a + prev_b)
    
    scores[t_i] += points
    prev_a, prev_b = a_i, b_i

winner = max(scores, key=scores.get)
print(winner, scores[winner])