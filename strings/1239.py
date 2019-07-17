def processar_string(s):
  i = 0
  italico = False
  negrito = False

  while i < len(s):
    if s[i] == '_':
      if italico:
        print('</i>', end='')
        italico = False
      else:
        print('<i>', end='')
        italico = True
    elif s[i] == '*':
      if negrito:
        print('</b>', end='')
        negrito = False
      else:
        print('<b>', end='')
        negrito = True
    else:
      print(s[i], end='')
    i += 1
  print()

while True:
  try:
    linha = input()
    processar_string(linha)
  except:
    break
