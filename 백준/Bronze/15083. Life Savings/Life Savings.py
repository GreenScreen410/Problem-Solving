p1, p2, p3 = map(int, input().split())
c1, c2, c3 = map(int, input().split())

prices = sorted([p1, p2, p3], reverse=True)
coupons = sorted([c2, c3], reverse=True)

total_sum = sum(prices)
save1 = total_sum * (c1 / 100)
save2 = (prices[0] * (coupons[0] / 100)) + (prices[1] * (coupons[1] / 100))

if save1 > save2:
    print(f"one {save1:.2f}")
else:
    print(f"two {save2:.2f}")