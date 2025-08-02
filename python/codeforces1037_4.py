'''
You are given n casinos, numbered from 1 to n. Each casino is described by three integers: li, ri, and reali (li≤reali≤ri). You initially have k

coins.

You can play at casino i
only if the current number of coins x satisfies li≤x≤ri. After playing, your number of coins becomes reali

.

You can visit the casinos in any order and are not required to visit all of them. Each casino can be visited no more than once.

Your task is to find the maximum final number of coins you can obtain.
'''


class casic():
	def __init__(self, l,x,r):
		self.l = l
		self.x = x
		self.r = r
	def __str__(self):
		return f"ORDER {self.l} {self.x} {self.r}"
		
for _ in range(int(input())):
	n,k = list(map(int,input().split()))
	L = []
	for i in range(n):
		arr = list(map(int,input().split()))
		c = casic(arr[0],arr[2],arr[1])
		L.append(c)
	L.sort(key=lambda item : (item.l, item.x))
	j = 0;
	while(j < n):
		if k < L[j].l:
			break
		if L[j].x > k:
			k = L[j].x
		j += 1
	print(k)
	
