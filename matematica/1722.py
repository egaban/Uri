fib = []
fib.append(1)
fib.append(2)

for i in range(498):
    fib.append(fib[i]+fib[i+1])

while True:
    a, b = map(int, input().split())
    if (a == b == 0):
        break
    comeco = 0
    fim = 499
    while fib[comeco] < a:
        comeco += 1
    while fib[fim] > b:
        fim -= 1
    print(fim-comeco+1)