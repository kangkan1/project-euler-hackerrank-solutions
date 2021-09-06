if __name__ == '__main__':
    t = int(input())
    for a in range(0, t):
        n = int(input())
        arr = list()
        for i in range(n):
            temp = list(map(int, input().split()))
            arr.append(temp)
        j = 0
        for i in range(n-2, -1, -1):
            for j in range(0, i+1):
                arr[i][j] += max(arr[i+1][j], arr[i+1][j+1])   
        print(arr[0][0])        
