def longest_substring(a, b):
  L = [[0 for i in range(len(b))] for j in range(len(a))]
  z = 0

  for i in range(len(a)):
    for j in range(len(b)):
      if a[i] == b[j]:
        if i == 0 or j == 0:
          L[i][j] = 1
        else:
          L[i][j] = L[i-1][j-1] + 1
        if L[i][j] > z:
          z = L[i][j]

  return z

while True:
  try:
    a = input()
    b = input()
    print(longest_substring(a, b))
  except:
    break
