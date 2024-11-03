# cook your dish here
import math
t = int(input())
for i in range(t):
    n = int(input())
    a = math.factorial(n)
    b = math.factorial(n-2)
    print (int(2*(a/(2*b))))
