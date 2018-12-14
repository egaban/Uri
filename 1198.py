while True:
	try:
		a, b = map(int, input().split())
		c = a - b
		if c < 0:
			c = -c
		print(c)
	except:
		break