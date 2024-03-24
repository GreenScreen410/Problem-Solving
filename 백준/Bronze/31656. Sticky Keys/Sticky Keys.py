S = input()

result = S[0]
for i in range(1, len(S)):
    if S[i] != S[i - 1]:
       result += S[i]
print(result)