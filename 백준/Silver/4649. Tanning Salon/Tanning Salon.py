while True:
    line = input().strip()
    if line == "0":
        break
    beds, s = line.split()
    beds = int(beds)

    occupied = set()
    walked = set()
    walk_count = 0
    for c in s:
        if c not in occupied and c not in walked:
            if len(occupied) < beds:
                occupied.add(c)
            else:
                walk_count += 1
                walked.add(c)
        elif c in occupied:
            occupied.remove(c)

    if walk_count == 0:
        print("All customers tanned successfully.")
    else:
        print(f"{walk_count} customer(s) walked away.")