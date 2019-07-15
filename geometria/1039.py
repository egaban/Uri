import math

def dist(x1, y1, x2, y2):
  dx = x1-x2
  dy = y1-y2

  return math.sqrt(dx*dx+dy*dy)

while True:
  try:
    r1, x1, y1, r2, x2, y2 = map(int, input().split())
    if r1 >= dist(x1, y1, x2, y2) + r2:
      print("RICO")
    else:
      print("MORTO")
  except:
    break
