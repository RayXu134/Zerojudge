while True:
	try:
		N = int(input());
		A = [int(n) for n in input().split(" ")]
		print(" ".join(str(n) for n in sorted(A)))
	except:
		break
