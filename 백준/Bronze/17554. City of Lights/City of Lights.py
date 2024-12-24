from sys import stdin
input = stdin.readline

N = int(input())
k = int(input())

lights = [1] * (N + 1)
current_off = 0
max_off = 0

for _ in range(k):
    i = int(input())
    
    for light_num in range(i, N + 1, i):
        lights[light_num] *= -1
        if lights[light_num] == -1:
            current_off += 1
        else:
            current_off -= 1
    max_off = max(max_off, current_off)

print(max_off)