'''
The pink soldiers have given you a sequence a consisting of n

positive integers.

You must repeatedly perform the following operation until there is only 1

element left.

    Choose two distinct indices i

and j
.
Then, choose a positive integer value x
such that there exists a non-degenerate triangle∗ with side lengths ai, aj, and x
.
Finally, remove two elements ai
and aj, and append x to the end of a

    . 

Please find the maximum possible value of the only last element in the sequence a
.
'''

#!/bin/python
import bisect

t = int(input())

for _ in range(t):
	int(input())
	arr = list( map(int, input().split()))
	arr.sort()
	pointer = 0
	while(len(arr) > pointer+1):
		v = arr[pointer] + arr[pointer+1] -1
		#bisect.insort(arr, v)
		arr[pointer+1] = v
		pointer += 1
	print(arr[-1])
