from functools import cmp_to_key


def angle_sort(points, p0):
    def compare(a, b):
        ax, ay = a[0] - p0[0], a[1] - p0[1]
        bx, by = b[0] - p0[0], b[1] - p0[1]

        ah = 0 if (ay > 0 or (ay == 0 and ax > 0)) else 1
        bh = 0 if (by > 0 or (by == 0 and bx > 0)) else 1
        if ah != bh:
            return ah - bh

        cross = ax * by - ay * bx
        if cross != 0:
            return -1 if cross > 0 else 1

        return (ax * ax + ay * ay) - (bx * bx + by * by)

    return sorted(points, key=cmp_to_key(compare))


def main():
    N = int(input())
    points = [tuple(map(int, input().split())) for _ in range(N)]
    p0 = tuple(map(int, input().split()))
    
    print("\n".join(f"{x} {y}" for x, y in angle_sort(points, p0)))


if __name__ == "__main__":
    main()