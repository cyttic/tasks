"""
A. Add or XOR
time limit per test
1 second
memory limit per test
256 megabytes
r-906 & IA AI - Psychologic Disco

You are given two non-negative integers a,b
. You can apply two types of operations on a

any number of times and in any order:

    a←a+1

. The cost of this operation is x
;
a←a⊕1
, where ⊕ denotes the bitwise XOR operation. The cost of this operation is y

    . 

Now you are asked to make a=b
. If it's possible, output the minimum cost; otherwise, report it.
"""

t = int(input())
for _ in range(t):
	a,b,x,y = list( map(int, input().split()))
	if a - b > 1:
		print(-1)
	elif a - b == 1 and a %2 == 1:
		print(y)
	elif a - b == 1 and a %2 == 0:
		print(-1)
	else:
		summ = 0
		while a != b:
			if a %2 == 1 or x < y:
				a = a + 1
				summ += x
			else:
				a = a ^1
				summ += y
		print(summ)
