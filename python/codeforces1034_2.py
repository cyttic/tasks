"""
B. Tournament
time limit per test
2 seconds
memory limit per test
256 megabytes

You are given an array of integers a1,a2,…,an
. A tournament is held with n players. Player i has strength ai

.

While more than k

players remain,

    Two remaining players are chosen at random;
    Then the chosen player with the lower strength is eliminated. If the chosen players have the same strength, one is eliminated at random. 

Given integers j
and k (1≤j,k≤n), determine if there is any way for player j to be one of the last k remaining players.
"""


t = int(input())
for i in range(t):
	n,j,k = list( map(int, input().split()))
	j -= 1;
	arr = list( map(int, input().split()))
	counter = 0
	for x in range(n):
		if arr[x] > arr[j]:
			counter += 1
	if k > 1:
		print("YES")
	elif k == 1 and counter ==0:
		print("YES")
	else:
		print("NO")
	
