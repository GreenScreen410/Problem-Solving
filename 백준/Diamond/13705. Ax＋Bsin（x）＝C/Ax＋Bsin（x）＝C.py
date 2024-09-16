# OpenAI o1-preview 2024-09-16

from decimal import Decimal, getcontext

# 계산 정확도를 높이기 위해 소수점 자릿수를 늘립니다.
getcontext().prec = 60  # 필요한 만큼 늘려주세요.

A_str, B_str, C_str = input().split()

A = Decimal(A_str)
B = Decimal(B_str)
C = Decimal(C_str)

def compute_pi(N=50):
    """BBP(Bailey–Borwein–Plouffe) 공식으로 π를 계산합니다."""
    getcontext().prec += 2  # 중간 계산의 정확도를 높입니다.
    pi = Decimal(0)
    k = 0
    while k < N:
        pi += (Decimal(1)/Decimal(16)**k)*(
            Decimal(4)/(8*k+1)
            - Decimal(2)/(8*k+4)
            - Decimal(1)/(8*k+5)
            - Decimal(1)/(8*k+6)
        )
        k += 1
    getcontext().prec -= 2  # 정확도 복원
    return +pi  # 단항 플러스로 현재 컨텍스트의 정확도를 적용

# 높은 정확도의 π를 계산합니다.
PI = compute_pi(50)

def sin_decimal(x):
    """Decimal을 사용하여 sin 함수를 구현합니다."""
    x = x % (2 * PI)  # x를 [0, 2π) 범위로 맞춥니다.
    term = x  # 첫 번째 항
    result = x
    n = 1
    while True:
        term *= - x * x / ((2 * n) * (2 * n + 1))  # 다음 항 계산
        prev_result = result
        result += term
        if result == prev_result:
            break  # 결과가 변화가 없으면 반복 종료
        n += 1
    return result

def f(x):
    """주어진 방정식의 좌변 - 우변 값을 계산하는 함수"""
    return A * x + B * sin_decimal(x) - C

low = Decimal('0')
high = (C + B) / A  # 초기 상한값 설정

# f(high)가 양수가 될 때까지 high를 늘립니다.
while f(high) <= 0:
    high *= 2

epsilon = Decimal('1e-35')  # 원하는 정확도에 맞게 epsilon 설정

# 이분법을 사용하여 근을 찾습니다.
while (high - low) > epsilon:
    mid = (low + high) / 2
    f_mid = f(mid)
    if f_mid > 0:
        high = mid
    else:
        low = mid

# 근사한 x 값 계산
x = (low + high) / 2

# 소수점 여섯째 자리까지 반올림하여 출력
x = x.quantize(Decimal('0.000001'))
print(x)

# OpenAI o1-preview 2024-09-16