def SomaPG2(n):
	return 2**n-1

n = int(input())

for i in range(n):
	x = int(input())
	print(int(SomaPG2(x)/12000), "kg")