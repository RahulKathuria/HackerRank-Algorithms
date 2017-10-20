#!/bin/python

import sys


n,k = raw_input().strip().split(' ')
n,k = [int(n),int(k)]
height = map(int, raw_input().strip().split(' '))
# your code goes here
largest = height[0]
i = 1
while i<n:
    if height[i]>largest:
        largest = height[i]
    i = i+1
if k>largest:
    print 0
else :
    print largest - k
