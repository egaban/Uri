import math

n = int(input())
for i in range(n):
    c = float(input())
    print(math.ceil(math.log2(c)), "dias")
