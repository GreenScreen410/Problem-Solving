n = int(input())
m = int(input())

adjectives = []
for _ in range(n):
    adjectives.append(input())

nouns = []
for _ in range(m):
    nouns.append(input())

for i in adjectives:
    for j in nouns:
        print(f"{i} as {j}")