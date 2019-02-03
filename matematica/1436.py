casos = int(input())

for i in range(casos):
    entrada = list(map(int, input().split()))
    quantidadeJogadores = entrada[0]
    entrada.pop(0)
    entrada.sort()
    capitao = entrada[int(quantidadeJogadores/2)]
    print("Case ", i+1, ": ", capitao, sep="")