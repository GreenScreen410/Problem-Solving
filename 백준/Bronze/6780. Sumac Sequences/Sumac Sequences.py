t1 = int(input())
t2 = int(input())

t = [t1, t2]
while True:
    t.append(t[-2] - t[-1])
    if t[-2] < t[-1]:
        break

print(len(t))