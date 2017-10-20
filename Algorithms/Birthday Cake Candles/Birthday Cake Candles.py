
#!/bin/python

import sys

def birthdayCakeCandles(n, ar):
    i=1
    largest = ar[0]
    while i<n:
        if ar[i]>largest:
            largest = ar[i]
        i = i+1
    count = 0
    i = 0
    while i<n:
        if ar[i]==largest:
            count = count+1
        i = i+1
    return count

# Complete this function

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = birthdayCakeCandles(n, ar)
print(result)

