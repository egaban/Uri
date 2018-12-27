while True:
	try:
		dic = {}
		c, n = map(int, input().split())
		l1 = input()
		l2 = input()

		for i in range(0, c):
			dic[l1[i]] = l2[i]

		for i in range(0, c):
			dic[l2[i]] = l1[i]

		for i in range(0, n):
			entrada = input()
			saida = ""

			for j in range(0, len(entrada)):
				if not entrada[j].isupper():
					if entrada[j].upper() in dic:
						saida += dic[entrada[j].upper()].lower()
					else:
						saida += entrada[j]
				elif entrada[j] in dic:
					saida += dic[entrada[j]]
				else:
					saida += entrada[j]

			print(saida)
		print()

	except:
		break
