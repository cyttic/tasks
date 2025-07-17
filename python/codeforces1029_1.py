"""
A. False Alarm
time limit per test
1 second
memory limit per test
256 megabytes

Yousef is at the entrance of a long hallway with n
doors in a row, numbered from 1 to n. He needs to pass through all the doors from 1 to n in order of numbering and reach the exit (past door n

).

Each door can be open or closed. If a door is open, Yousef passes through it in 1

second. If the door is closed, Yousef can't pass through it.

However, Yousef has a special button which he can use at most once at any moment. This button makes all closed doors become open for x

seconds.

Your task is to determine if Yousef can pass through all the doors if he can use the button at most once.
"""
t = int(input())
for _ in range(t):
	n,x = list(map(int, input().split()))
	arr = list(map(int, input().split()))
	diff =  0
	cc = 0
	i = 0
	while i < n:
		if arr[i] == 1 and diff == 0:
			diff = 5
			i += x-1
		elif arr[i] == 1:
			cc += 1
		i += 1
	if cc == 0:
		print("YES")
	else:
		print("NO")
		
