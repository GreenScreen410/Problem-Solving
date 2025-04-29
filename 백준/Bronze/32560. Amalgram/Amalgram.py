from collections import Counter

a = input()
b = input()
result = Counter(a) | Counter(b)
print("".join(result.elements()))