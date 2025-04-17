import sys
input = sys.stdin.readline

N = int(input())
M = int(input())
materials = list(map(int, input().split()))
materials.sort()

count = 0
left, right = 0, N - 1
while left < right:
    s = materials[left] + materials[right]

    if s == M:
        count += 1
        left += 1
        right -= 1
    elif s < M:
        left += 1
    else:
        right -= 1

print(count)