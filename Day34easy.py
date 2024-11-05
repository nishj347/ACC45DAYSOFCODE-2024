# cook your dish here
t = int(input())
for i in range(t):
    a,b = map(int, input().split())
    res = 21-(a+b)
    if 1<=res<=10:
        print(res)
    else:
        print("-1")
