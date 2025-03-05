'''
After completing the first quest, Akito left the starting cave. After a while, he stumbled upon a goblin village.

Since Akito had nowhere to live, he wanted to find out the price of housing. It is well known that goblins write numbers as a string of characters '-' and '_', and the value represented by the string s
is the number of distinct subsequences∗ of the string s

that are equal to the string "-_-" (this is very similar to goblin faces).

For example, the string s=
"-_--_-" represents the number 6, as it has 6

subsequences "-_-":

    s1+s2+s3

s1+s2+s4
s1+s2+s6
s1+s5+s6
s3+s5+s6
s4+s5+s6

Initially, the goblins wrote a random string-number s
in response to Akito's question, but then they realized that they wanted to take as much gold as possible from the traveler. To do this, they ask you to rearrange the characters in the string s so that the value of the number represented by the string s is maximized.
'''


#!/bin/python

t = int(input())

for _ in range(t):
	k = int(input())
	s = input()
	a = s.count('_')
	b = s.count('-')
	if a < 1 or b < 2:
		print(0)
	else:
		if b %2 == 0:
			res = (( b//2)**2 )* a
			print(res)
		else:
			res = (((( (b-1)//2)**2 ) + (( (b+1)//2)**2 ))//2)*a
			print(res)
