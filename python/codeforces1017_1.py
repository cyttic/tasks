t = int(input());
for _ in range(t):
	arr = input().split()
	foo = lambda x : list(map(lambda y: y[0],x))
	print("".join(foo(arr)))
