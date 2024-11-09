# cook your dish here
T = int(input())
for _ in range(T):
    N, A, B = map(int, input().split())
    rounds = N.bit_length() - 1
    total_time = rounds * (A + B) - B
    print(total_time)
