k, s = map(int, input().split())
q, r = divmod(s, k)
print(q + r)