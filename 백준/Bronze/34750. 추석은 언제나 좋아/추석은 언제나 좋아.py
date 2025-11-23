N = int(input())

if N >= 1000000:
    give = N * 20 // 100
elif N >= 500000:
    give = N * 15 // 100
elif N >= 100000:
    give = N * 10 // 100
else:
    give = N * 5 // 100

print(give, N - give)