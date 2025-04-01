T = int(input())

alphabets = "abcdefghijklmnopqrstuvwxyz "
for _ in range(T):
    S = input().split()

    decoded = ""
    for c in S:
        decoded += alphabets[sum(ord(c) - ord("a") for c in c) % 27]
    print(decoded)