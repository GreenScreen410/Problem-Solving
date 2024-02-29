def calculate_defense_ignore(N, A):
    defense_ignore = 0.0
    result = []
    for i in A:
        defense_ignore = 1 - (1 - defense_ignore) * (1 - i / 100)
        result.append(defense_ignore)
    return result

N = int(input())
A = list(map(int, input().split()))

for i in calculate_defense_ignore(N, A):
    print(f"{i  * 100:.6f}")