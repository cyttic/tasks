

#!/bin/python

'''
Akito still has nowhere to live, and the price for a small room is everywhere. For this reason, Akito decided to get a job at a bank as a key creator for storages.

In this magical world, everything is different. For example, the key for a storage with the code (n,x)
is an array a of length n

such that:

    a1 | a2 | a3 | … | an=x

, where a | b is the bitwise "OR" of numbers a and b
.
MEX({a1,a2,a3,…,an})
∗

    is maximized among all such arrays. 

Akito diligently performed his job for several hours, but suddenly he got a headache. Substitute for him for an hour; for the given n
and x, create any key for the storage with the code (n,x).
'''

t = int(input())

def getMinV(a):
	i = 0
	p = 0
	while(i < a):
		i = 2**p
		if i & a == 0:
			return (2**p,p)
		p += 1
	return (0,0)   



for _ in range(t):
	a,b = list( map(int, input().split() ))
	m,p  = getMinV(b) 
	res_arr = []
	res = 0
	for i in range(m): 
		if a == 0:
			break
		res = res | i
		res_arr.append(i)
		a -= 1 
	if res != b:
		if a == 0:
			res_arr.pop(-1)
		res_arr.append(b)	
		a -= 1 
	for i in range(a): 
		res_arr.append(0)
	print(*res_arr)
	

