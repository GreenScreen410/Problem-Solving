alarm = input()
now = input()

ah, am = map(int, alarm.split(":"))
nh, nm = map(int, now.split(":"))
if nh * 60 + nm > ah * 60 + am:
    print("YES")
else:
    print("NO")