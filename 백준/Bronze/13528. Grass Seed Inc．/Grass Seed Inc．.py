C = float(input())
L = int(input())
total = 0.0
for _ in range(L):
    w, l = map(float, input().split())
    total += w * l * C
print(f"{total:.6f}")