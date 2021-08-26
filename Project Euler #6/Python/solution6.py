if __name__ == '__main__':
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        sum1 = n*(n+1)//2
        sum2 = n*(n+1)*(2*n+1)//6
        print(sum1*sum1 - sum2);
