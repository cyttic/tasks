'''
You are given an array a of n numbers and a number k. The value ai describes the weather on the i-th day: if it rains on the i-th day, then ai=1; otherwise, if the weather is good on the i-th day, then ai=0

.

Jean wants to visit as many peaks as possible. One hike to a peak takes exactly k
days, and during each of these days, the weather must be good (ai=0). That is, formally, he can start a hike on day i only if all aj=0 for all j (i≤j≤i+k−1)

.

After each hike, before starting the next one, Jean must take a break of at least one day, meaning that on the day following a hike, he cannot go on another hike.

Find the maximum number of peaks that Jean can visit.
'''


for _ in range(int(input())):
	n,k = list(map(int, input().split()))
	arr = list(map(int, input().split()))
	indx = 0
	counter = 0
	summ = 0
	while indx < n :
		if arr[indx] == 0:
			counter += 1
		else:
			counter = 0
		if counter == k:
			summ += 1
			counter = 0
			indx += 1
		indx += 1
	print(summ)
		
		
