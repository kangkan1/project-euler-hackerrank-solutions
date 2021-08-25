if __name__ == '__main__':
    t = int(input().strip())
    for a0 in range(t):
        n,k = input().strip().split(' ')
        n,k = [int(n),int(k)]
        s = input().strip()
        max_no = 0
        for i in range(0, n-k):
            pro = 1
            for j in range(i, i+k):
                pro = pro*int(s[j])
            max_no = pro if max_no < pro else max_no
        print(max_no)         
                
                
