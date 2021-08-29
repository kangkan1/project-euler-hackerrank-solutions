# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == '__main__':
    t = int(input())
    _sum = 0
    for i in range(t):
        _sum += int(input())
    s = str(_sum)
    print(s[0:10:1])    
