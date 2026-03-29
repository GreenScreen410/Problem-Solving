N = int(input())
        
values = []
for _ in range(N):
    a, b = map(int, input().split())
    values.append(a / b)

print(f"{min(values):.11f} {max(values):.11f} {sum(values):.11f}")