def backtracking(comeco):
	global movimentos
	global visitados

	visitados[comeco] = True
	for i in range(len(grafo[comeco])):
		if not visitados[grafo[comeco][i]]:
			backtracking(grafo[comeco][i])
			movimentos += 2

casos = int(input())
while casos > 0:
	grafo = [[] for i in range(49)]
	visitados = [False for i in range(49)]
	global movimentos
	movimentos = 0
	comeco = int(input())
	vertices, arestas = map(int, input().split())

	for i in range(arestas):
		a, b = map(int, input().split())
		grafo[a].append(b)
		grafo[b].append(a)

	backtracking(comeco)
	print(movimentos)

	casos -= 1
