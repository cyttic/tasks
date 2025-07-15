"""
. Line Segments
time limit per test
1.5 seconds
memory limit per test
256 megabytes
PIKASONIC - Lost My Mind (feat.nakotanmaru)

You are given two points (px,py)
and (qx,qy)

on a Euclidean plane.

You start at the starting point (px,py)
and will perform n operations. In the i-th operation, you must choose any point such that the Euclidean distance∗ between your current position and the point is exactly ai

, and then move to that point.

Determine whether it is possible to reach the terminal point (qx,qy)
after performing all operations.
"""


t = int(input())
for _ in range(t):
	n = int(input())
	p1,p2,p3,p4 = list(map(int, input().split()))
	l = list(map(int, input().split()))
	dist = ((p1-p3)**2 + (p2-p4)**2)**0.5
	if n == 1:
		if l[0] == dist:
			print("YES")
		else:
			print("NO")
	else:
		l.append(dist)
		res = True
		maxx = 0
		for i in range(n+1):
			if maxx < l[i]:
				maxx = l[i]
		summ = -maxx
		for i in range(n+1):
			summ += l[i]
		if summ < maxx:
			print("NO")
		else:
			print("YES")
		
	
