

#!/bin/python

import bisect
t = int(input())

for _ in range(t):
	input()
	arr1 = list( map(int, input().split() ))
	arr2 = list( map(int, input().split() ))
	
	arr2.sort()
	arr1[0] = min(arr1[0], arr2[0] - arr1[0])
	res = False
	for i in range(1, len(arr1)):
		if i >0:
			if min(arr1[i], arr2[0]-arr1[i]) >= arr1[i - 1]:
				arr1[i] = arr2[  bisect.bisect_left(arr2, arr1[i] + arr1[i+1])]
			elif max(arr1[i], arr2[-1] + arr1[i]) < arr1[i-1]:
				res = True
				break
			else:
				arr1[i] = max(arr1[i], arr2[-1]-arr1[i])
	print(arr1)
	print(arr2)
	print('YNEos'[res::2])
			
			
