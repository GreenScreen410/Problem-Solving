import sys
from itertools import permutations, product

operators = [
    lambda a, b: a + b,
    lambda a, b: a - b,
    lambda a, b: a * b,
    lambda a, b: a / b if abs(b) > 1e-9 else float("inf")
]

def can_solve(N, target):
    for A, B, C, D in permutations(N):
        for op1, op2, op3 in product(operators, repeat=3):
            results = [
                op3(op2(op1(A, B), C), D),
                op3(op1(A, op2(B, C)), D),
                op2(op1(A, B), op3(C, D)),
                op1(A, op3(op2(B, C), D)),
                op1(A, op2(B, op3(C, D)))
            ]
            
            for i in results:
                if abs(i - target) < 1e-9:
                    return True
    
    return False

while True:
    N = list(map(int, input().split()))
    if N[0] == -1:
        break
    
    if can_solve(N[:4], N[4]):
        print(*N, "OK!")
    else:
        print(*N, "NO!")