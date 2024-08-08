from math import floor

T = int(input())
for _ in range(T):
    scores = list(map(int, input().split()))
    
    print(floor(9.23076 * (26.7 - scores[0]) ** 1.835) +
          floor(1.84523 * (scores[1] - 75) ** 1.348) +
          floor(56.0211 * (scores[2] - 1.5) ** 1.05) +
          floor(4.99087 * (42.5 - scores[3]) ** 1.81) +
          floor(0.188807 * (scores[4] - 210) ** 1.41) +
          floor(15.9803	 * (scores[5] - 3.8) ** 1.04) +
          floor(0.11193	 * (254 - scores[6]) ** 1.88))