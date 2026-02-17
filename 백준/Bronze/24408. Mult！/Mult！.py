n = int(input())
nums = [int(input()) for _ in range(n)]

i = 0
while i < n:
    base = nums[i]
    i += 1
    while i < n:
        if nums[i] % base == 0:
            print(nums[i])
            i += 1
            break
        i += 1