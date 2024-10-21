# cook your dish here
t = int(input())
for i in range(t):
    n,a,b = map(int,input().split())
    time = 0
    while(n!=1):
        time=time+a+b
        n=n/2
    print(time-b)
