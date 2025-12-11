import math

n, k = map(int, input().split())
points = []
for _ in range(n):
    points.append(list(map(int, input().split())))
qx, qy = map(int, input().split())

if n % k != 0:
    print("NO")
    exit()

angles = []
for x, y in points:
    angles.append(math.atan2(y - qy, x - qx))
angles.sort()
angles = angles + angles

for i in range(n // k):
    possible = True
    
    for j in range(k):
        index = i + (j + 1) * n // k - 1
        
        angle1 = angles[index]
        angle2 = angles[index + 1]
        
        if angle1 == angle2: 
            possible = False
            break
    
    if possible:
        print("YES")
        exit()

print("NO")