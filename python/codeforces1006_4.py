Akito got tired of being a simple locksmith at a bank, so he decided to enroll in the Magical Academy and become the best wizard in the world! However, to enroll, he needed to solve a single problem on the exam, which the ambitious hero could not manage.

In the problem, he was given an array a
of length n. He needed to minimize the number of inversions∗ in the array after applying the spell exactly once. The spell was simple; to apply it, Akito had to choose two numbers l and r such that 1≤l≤r≤n and perform a cyclic shift of the subarray from l to r

one position to the left.

More formally, Akito selects the subarray [l,r]

and modifies the array as follows:

    From the original array [a1,a2,…,al−1,al,al+1,…,ar−1,ar,ar+1,…,an−1,an]

, he obtains the array [a1,a2,…,al−1,al+1,al+2,…,ar−1,ar,al,ar+1,…,an−1,an]

    . 

Akito is eager to start his studies, but he still hasn't passed the exam. Help him enroll and solve the problem!

#!/bin/python

t = int(input())

for _ in range(t):
	k = int(input())
	arr = list(map(int, input().split()))
	res = (0,0)
	
	diff = 0
	for i in range(len(arr)):
		c1 = 0
		c2 = 0
		for j in range(i+1, len(arr)): 
			if arr[j] > arr[i]:
				c1 += 1
			if arr[j] < arr[i]:
				c2 += 1
			if diff > c1- c2:
				res = (i+1,j+1)
				diff = c1 -c2
	if res[0] == res[1]:
		res = (1,1)
	print(*res)
		
  
