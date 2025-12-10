N, M = map(int, input().split())
scores = list(map(int, input().split()))

result = []
for _ in range(M):
    data = input().split()
    
    student_id = int(data[0])
    answers = data[1:]
    
    score = 0
    for i in range(N):
        if answers[i] == "O":
            score += scores[i]    
    result.append([score, student_id])

result.sort(key=lambda x: (-x[0], x[1]))
print(result[0][1], result[0][0])