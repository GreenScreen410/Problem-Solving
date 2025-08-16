n = int(input())

for x in range(1, n + 1):
    m = int(input())
    
    result = []
    for _ in range(m):
        current = int(input())

        new_grade = current + 1
        if 1 <= new_grade <= 6:
            result.append(new_grade)

    print(f"Case {x}:")
    for grade in result:
        print(grade)