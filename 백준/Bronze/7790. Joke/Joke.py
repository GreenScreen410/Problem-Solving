import sys

text = sys.stdin.read()
lines = text.splitlines()
count = 0

for line in lines:
    count += line.count("joke")

print(count)