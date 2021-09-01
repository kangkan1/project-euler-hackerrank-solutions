if __name__ == '__main__':
    n = int(input())
    _sum = 0
    for i in range(100, 1000000):
        num = i
        temp = 0
        while num > 0:
            temp = temp + (num % 10) ** n
            num = num // 10
        if i == temp:
            #print("yes")
            _sum = _sum + i
    print(_sum)
