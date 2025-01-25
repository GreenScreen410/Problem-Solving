total_score = 0
total_grade = 0

for _ in range(20):
    subject, score, grade = input().split()
    score = float(score)
    
    if grade != "P":
        total_score += score
        
        if grade == "A+":
            total_grade += 4.5 * score
        elif grade == "A0":
            total_grade += 4.0 * score
        elif grade == "B+":
            total_grade += 3.5 * score
        elif grade == "B0":
            total_grade += 3.0 * score
        elif grade == "C+":
            total_grade += 2.5 * score
        elif grade == "C0":
            total_grade += 2.0 * score
        elif grade == "D+":
            total_grade += 1.5 * score
        elif grade == "D0":
            total_grade += 1.0 * score
        elif grade == "F":
            total_grade += 0.0 * score

print(total_grade / total_score)