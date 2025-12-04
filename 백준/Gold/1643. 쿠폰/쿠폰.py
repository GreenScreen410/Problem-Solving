import sys
import math


def main():
    for line in sys.stdin:
        line = line.strip()
        if not line:
            continue

        N = int(line)

        lcm = 1
        for i in range(1, N + 1):
            lcm = math.lcm(lcm, i)

        total = sum(N * (lcm // k) for k in range(1, N + 1))
        integer = total // lcm
        remainder = total % lcm

        if remainder == 0:
            print(integer)
        else:
            gcd = math.gcd(remainder, lcm)
            r = remainder // gcd
            q = lcm // gcd

            space = " " * (len(str(integer)) + 1)
            print(space + str(r))
            print(str(integer) + " " + "-" * len(str(q)))
            print(space + str(q))


if __name__ == "__main__":
    main()