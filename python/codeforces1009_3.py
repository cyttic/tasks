

#!/bin/python

t = int(input())
for _  in range(t):
	v = int(input())
	isFind = False
	for j in range(v-1,0,-1):
		k = j^v
		if k+j > v and k+v > j and j+v > k:
			print(j)
			isFind = True
			break
	if not isFind:
		print(-1)
			
