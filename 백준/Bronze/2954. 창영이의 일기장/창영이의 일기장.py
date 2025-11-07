S = input()

i = 0
result = ""
while i < len(S):
    result += S[i]
    if S[i] in "aeiou":
        i += 3
    else:
        i += 1

print(result)