import math

k = int(input())

for i in range(k):
    n, m = map(int, input().split())
    print(int(math.log10(n**m)) + 1)
