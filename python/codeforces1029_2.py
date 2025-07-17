"""
B. Shrink
time limit per test
2 seconds
memory limit per test
256 megabytes

A shrink operation on an array a
of size m

is defined as follows:

    Choose an index i

(2≤i≤m−1) such that ai>ai−1 and ai>ai+1
.
Remove ai

    from the array. 

Define the score of a permutation∗
p as the maximum number of times that you can perform the shrink operation on p

.

Yousef has given you a single integer n
. Construct a permutation p of length n

with the maximum possible score. If there are multiple answers, you can output any of them.

∗
"""

t = int(input())
for _ in range(t):
	n = int(input())
	rr = list(range(1, n+1))
	i = n-1
	j = 1
	while i > j: 
		tmp = rr[i]
		rr[i] = rr[j]
		rr[j] = tmp
		i-=1
		j += 2
	print(*rr)
