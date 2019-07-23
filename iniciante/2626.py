  def vence(x, y):
    return x == "pedra" and y == "tesoura" or x == "tesoura" and y == "papel" or x == "papel" and y == "pedra"

  while True:
    try:
      a, b, c = input().split()
      if vence(a, b) and vence(a, c):
        print("Os atributos dos monstros vao ser inteligencia, sabedoria...")
      elif vence(b, a) and vence(b, c):
        print("Iron Maiden's gonna get you, no matter how far!")
      elif vence(c, a) and vence(c, b):
        print("Urano perdeu algo muito precioso...")    
      else:
        print("Putz vei, o Leo ta demorando muito pra jogar...")
    except:
      break