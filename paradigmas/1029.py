chamadas = [-1 for i in range(40)]
chamadas[0] = 0
chamadas[1] = 0
fib = [-1 for i in range(40)]
fib[0] = 0
fib[1] = 1

def fibonacci(n):
  if fib[n] == -1:
    fib[n] = fibonacci(n-1) + fibonacci(n-2)
    chamadas[n] = 2 + chamadas[n-2] + chamadas[n-1]
  return fib[n]

c = int(input())
for i in range(c):
  n = int(input())
  r = fibonacci(n)
  print('fib(', n, ') = ', chamadas[n], ' calls = ', fib[n], sep='')
