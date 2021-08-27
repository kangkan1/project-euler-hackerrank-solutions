if __name__ == "__main__":
    palin = list()
    for i in range(100, 1000):
        for j in range(100, 1000):
            num = i*j
            s = str(num)
            if s == s[::-1]:
                palin.append(num)
    palin.sort()            
            
    t = int(input().strip())       
    for a0 in range(t):
        n = int(input().strip())
        l = 0
        r = len(palin)
        for i in range(r-1,1,-1):
            if n>palin[i]:
                print(palin[i])
                break
    