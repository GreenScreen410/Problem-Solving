N = int(input())
M = int(input())
S = input().rstrip()

pattern_length = 2 * N + 1
count = 0
pattern_count = 0

i = 1
while i < M - 1:
    if S[i - 1] == "I" and S[i] == "O" and S[i + 1] == "I":
        pattern_count += 1
        if pattern_count == N:
            count += 1
            pattern_count -= 1
        i += 2
    else:
        pattern_count = 0
        i += 1

print(count)