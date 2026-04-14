n = int(input())
nums = list(map(int, input().split()))

max = 1
curr = 1
for i in range(1, n):
    if nums[i] > nums[i - 1]:
        curr += 1
    else:
        curr = 1
    
    if curr > max:
        max = curr

print(max)