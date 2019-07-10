n = int(input())
for i in range(n):
  texto = input().split()
  for j in range(len(texto)):
    print(texto[j][0], end='')
  print()
