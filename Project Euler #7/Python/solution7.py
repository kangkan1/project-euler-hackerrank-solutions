def isPrime(n):
    if n <= 1:
        return False
    if n == 2 or n == 3:
        return True
    if n%2 == 0 or n%3 == 0:
        return False
    i = 5
    while i*i <= n:
        if n%i == 0 or n%(i+2) == 0:
            return False
        i = i +6
    return True    
        
        
if __name__ == "__main__":
    arr = list()
    arr.append(2)
    arr.append(3)
    count = 2
    i = 5
    while count < 10000:
        if isPrime(i):
            count = count+1
            arr.append(i)
        i = i+2
            
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        print(arr[n-1])