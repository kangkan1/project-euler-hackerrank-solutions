if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        max_prime = 2
        i = 3
        while n%2 == 0:
            n = n//2
            
        while i*i<=n:
            while n%i == 0:
                max_prime = i
                n = n//i
            i = i + 2
        if max_prime > n:    
            print(max_prime)
        else:
            print(n)    
