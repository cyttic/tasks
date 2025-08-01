'''
You are given an integer x.
You need to find the smallest non-negative integer y such that the numbers x and y share at least one common digit.
In other words, there must exist a decimal digit d that appears in both the representation of the number x and the number y.
'''


for _ in range(int(input())):	
	print(min(list(map(int,input()))))
