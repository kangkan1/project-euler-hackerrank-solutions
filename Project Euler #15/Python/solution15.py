if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n , m = list(map(int, input().split()))
        mul1 = 1
        mul2 = 1
        mul3 = 1
        for j in range(1, n+1,1):
            mul1 = mul1*j
        for j in range(1, m+1,1):
            mul2 = mul2*j
        for j in range(1, n+m+1, 1):
            mul3 = mul3*j
        print((mul3//(mul2*mul1))%1000000007)           
