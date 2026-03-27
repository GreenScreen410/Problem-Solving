from collections import Counter

S = Counter(input())

scicom = Counter("SciCom")
love = Counter("Love")

x = min(S[c] // scicom[c] for c in scicom)
y = min(S[c] // love[c] for c in love)

print("SciCom" * x + "Love" * y)