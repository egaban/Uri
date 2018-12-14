while True:
	try:
		n, identificador = map(int, input().split())

		gameplays = 0
		for i in range(n):
			a, b = map(int, input().split())
			if a == identificador and not b:
				gameplays = gameplays + 1
		print(gameplays)
	except:
		break