k = int(input())
chunks = [input() for _ in range(k)]
t = list(map(int, input().split()))

message = "".join(chunks)
times = []
for si, ti in zip(chunks, t):
    times.extend([ti] * len(si))

time = 0
count = 0
i = 0
code = False

while i < len(message):
    if code:
        if message[i] == "`":
            code = False
            i += 1
        else:
            time = max(time, times[i] - count)
            count += 1
            i += 1
    else:
        if message[i] == "\\":
            time = max(time, times[i + 1] - count)
            count += 1
            i += 2
        elif message[i] == "`":
            code = True
            i += 1
        elif message[i] == ":":
            j = message.find(":", i + 1)
            time = max(time, times[j] - count)
            count += 1
            i = j + 1
        elif message[i] in "()[]":
            i += 1
        else:
            time = max(time, times[i] - count)
            count += 1
            i += 1

print(time)