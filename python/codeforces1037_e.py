'''
Two arrays p and s of length n are given, where p is the prefix GCD∗ of some array a, and s is the suffix GCD of the same array a. In other words, if the array a existed, then for each 1≤i≤n

, the following equalities would hold both:

    pi=gcd(a1,a2,…,ai)

si=gcd(ai,ai+1,…,an)

    . 

Determine whether there exists such an array a for which the given arrays p and s can be obtained.
'''

import math

def lcm(a, b):
    return abs(a * b) // math.gcd(a, b)

def calc():
    t = int(input())
    for _ in range(t):
        n = int(input()) 
        a = [0] + list(map(int, input().split()))  # Array a (1-indexed)
        b = [0] + list(map(int, input().split()))  # Array b (1-indexed)
        
        ans = [0] * (n + 1)
        for i in range(n, 0, -1):
            ans[i] = lcm(a[i], b[i])
        
        ch = True
        if ans[1] != a[1]:
            ch = False
        if ans[n] != b[n]:
            ch = False
        
        for i in range(2, n + 1):
            if math.gcd(a[i - 1], ans[i]) != a[i]:
                ch = False
        
        for i in range(n - 1, 0, -1):
            if math.gcd(b[i + 1], ans[i]) != b[i]:
                ch = False
        
        print("YES" if ch else "NO")

calc()
