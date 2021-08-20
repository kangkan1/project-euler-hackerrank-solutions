if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        f = 0
        f1 = 0
        f2 = 1
        sum = 0
        f = f1+f2
        while f < n:
            if f%2 == 0:
                sum += f
            f1 = f2
            f2 = f
            f = f1+f2
        print(sum) 