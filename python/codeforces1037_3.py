'''
You are given n towers, numbered from 1 to n. Tower i has a height of hi. At time 0, you are on the tower with index k, and the current water level is 1

.

Every second, the water level rises by 1

unit. At any moment, if the water level becomes strictly greater than the height of the tower you are on, you perish.

You have a magical ability: at moment x
, you can start teleporting from tower i to tower j, which will take |hi−hj| seconds. That is, until moment x+|hi−hj|, you will be on tower i, and at moment x+|hi−hj|, you will move to tower j. You can start a new teleportation at the same moment you just arrived at tower j.
'''


for _ in range(int(input())):
	n,k = list(map(int, input().split()))
	arr = list(map(int, input().split()))
	curr_pos = arr[k-1]
	arr = list(dict.fromkeys(arr))
	arr.sort()
	counter = 0
	for i in arr:
		if i == curr_pos:
			curr_pos = counter
			break
		counter += 1
	water_level = 0
	n = len(arr)
	while counter < (n-1):
		#print(f"COUNTER: {counter}")
		water_level += arr[counter+1] - arr[counter]
		if water_level > arr[counter]:
			break
		counter += 1
	if counter == n-1:
		print("YES")
	else:
		print("NO")
			
	
