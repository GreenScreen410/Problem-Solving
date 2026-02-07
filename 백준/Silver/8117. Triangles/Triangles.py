nums = []
while True:
    x = int(input())
    if x == 0:
        break
    nums.append(x)

nums.sort()
found = False
for i in range(len(nums) - 2):
    a, b, c = nums[i], nums[i + 1], nums[i + 2]
    if a + b > c:
        print(a, b, c)
        found = True
        break

if not found:
    print("NIE")