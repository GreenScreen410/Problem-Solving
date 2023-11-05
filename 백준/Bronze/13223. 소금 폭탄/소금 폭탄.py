now = list(map(int, input().split(':')))
now = 60 * (60 * now[0] + now[1]) + now[2]

alarm = list(map(int, input().split(':')))
alarm = 60 * (60 * alarm[0] + alarm[1]) + alarm[2]

time = alarm - now + 86400 * (now >= alarm)
print('%02d:%02d:%02d' % (time // 3600, time % 3600 // 60, time % 3600 % 60))