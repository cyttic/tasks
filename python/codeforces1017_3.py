t = int(input())
for _ in range(t):
	n = int(input())
	s = set()
	for i in range(n):
		arr = list(map(int, input().split()))
		for v in arr:
			s.add(v)
	s2 = set(range(1,n))
	s = s + s
	print(*s)
