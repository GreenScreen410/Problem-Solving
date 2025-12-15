from datetime import datetime

t = datetime.strptime(input(), "%B %d, %Y %H:%M")

start = datetime(t.year, 1, 1, 0, 0)
end = datetime(t.year + 1, 1, 1, 0, 0)

total = (end - start).total_seconds()
elapsed = (t - start).total_seconds()

print(elapsed / total * 100)