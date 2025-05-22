def valid(candidate: str) -> bool:
    for name in names:
        if sum(c1 != c2 for c1, c2 in zip(candidate, name)) > 1:
            return False
    return True


N, L = map(int, input().split())

names = []
for _ in range(N):
    names.append(input())

for base in names:
    for i in range(L):
        for o in range(ord("A"), ord("Z") + 1):
            c = chr(o)
            if c == base[i]:
                continue
            trial = base[:i] + c + base[i + 1 :]
            if valid(trial):
                print(trial)
                exit()

print("CALL FRIEND")