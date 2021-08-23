def hcf(a, b):
    if a == 0:
        return b;
    return hcf(b%a, a);

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        num = 1
        for i in range(2, n+1, 1):
            num = num*i//hcf(num, i)
        print(num)    
