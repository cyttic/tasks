The pink soldiers have given you 4 distinct points on the plane. The 4 points' coordinates are (−l,0), (r,0), (0,−d), (0,u) correspondingly, where l, r, d, u

are positive integers.
In the diagram, a square is drawn by connecting the four points L
, R, D, U
.

Please determine if it is possible to draw a square∗
with the given points as its vertices.



#!/bin/python

t = int(input())

for _ in range(t):
	arr = list( map(int, input().split()))
	a = abs(arr[0])
	res = 'yes'
	for i in arr:
		if abs(i) != a:
			res = 'no'
	print(res)
	
