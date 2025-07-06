"""
A. Blackboard Game
time limit per test
1 second
memory limit per test
256 megabytes

Initially, the integers from 0
to n−1

are written on a blackboard.

In one round,

    Alice chooses an integer a

on the blackboard and erases it;
then Bob chooses an integer b
on the blackboard such that a+b≡3(mod4)∗

    and erases it. 

Rounds take place in succession until a player is unable to make a move — the first player who is unable to make a move loses. Determine who wins with optimal play. 
"""


t = int(input())
for i in range(0,t):
	n = int(input())
	if n < 4:
		print("Alice")
	elif n %4 == 0:
		print("Bob")
	else:
		print("Alice")
