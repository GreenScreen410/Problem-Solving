r, g, b = map(int, input().split())

r_prime = r / 255
g_prime = g / 255
b_prime = b / 255

k = 1 - max(r_prime, g_prime, b_prime)

if k == 1:
    c = 0.0
    m = 0.0
    y = 0.0
else:
    c = (1 - r_prime - k) / (1 - k)
    m = (1 - g_prime - k) / (1 - k)
    y = (1 - b_prime - k) / (1 - k)

print(c, m, y, k)