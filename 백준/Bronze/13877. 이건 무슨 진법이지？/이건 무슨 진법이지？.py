T = int(input())

for _ in range(T):
    K, N = input().split()
    O = int(N, 8) if max(list(N)) < '8' else 0
    
    print(K, O, int(N), int(N, 16))