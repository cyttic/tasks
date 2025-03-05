'''
C1. Skibidus and Fanum Tax (easy version)
time limit per test
2 seconds
memory limit per test
256 megabytes

This is the easy version of the problem. In this version, m=1

.

Skibidus has obtained two arrays a
and b, containing n and m elements respectively. For each integer i from 1 to n

, he is allowed to perform the operation at most once:

    Choose an integer j

such that 1≤j≤m. Set ai:=bj−ai. Note that ai

    may become non-positive as a result of this operation. 

Skibidus needs your help determining whether he can sort a
in non-decreasing order∗

by performing the above operation some number of times.

∗
a is sorted in non-decreasing order if a1≤a2≤…≤an.


#!/bin/python

causes = int( input() )

for _ in range(causes):
	a,b = list(map(int, input().split()))
	arr1 = list(map(int, input().split()))
	arr2 = list(map(int, input().split()))
	res = False
	
	arr1[0] = min(arr1[0], arr2[0] - arr1[0])
	for i in range(1, len(arr1)):
		if i > 0 and min(arr1[i], arr2[0] - arr1[i]) >= arr1[i-1]:
			arr1[i] = min(arr1[i], arr2[0] - arr1[i])
		elif max(arr1[i], arr2[0]-arr1[i]) < arr1[i-1]:
				res = True
				break
		else:
			arr1[i] = max(arr1[i], arr2[0]-arr1[i])
	print( 'YNEOS'[res::2]  )
'''

#!/bin/python
 
causes = int( input() )
 
for _ in range(causes):
	a,b = list(map(int, input().split()))
	arr1 = list(map(int, input().split()))
	arr2 = list(map(int, input().split()))
	res = False
	
	arr1[0] = min(arr1[0], arr2[0] - arr1[0])
	for i in range(1, len(arr1)):
		if i > 0 and min(arr1[i], arr2[0] - arr1[i]) >= arr1[i-1]:
			arr1[i] = min(arr1[i], arr2[0] - arr1[i])
		elif max(arr1[i], arr2[0]-arr1[i]) < arr1[i-1]:
				res = True
				break
		else:
			arr1[i] = max(arr1[i], arr2[0]-arr1[i])
	print( 'YNEOS'[res::2]  )
	
