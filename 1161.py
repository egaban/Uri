def Fatorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * Fatorial(n-1)

while True:
    try:
        m, n = map(int, input().split())
        print(Fatorial(m) + Fatorial(n))
    except:
        break
