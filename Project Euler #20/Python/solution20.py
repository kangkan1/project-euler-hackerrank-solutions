t = int(input())
for i in range(t):
    n = int(input());
    fac = 1
    for j in range(1, n+1):
        fac = fac*j
    _sum = 0
    while fac > 0:
        _sum = _sum+fac%10
        fac = fac//10
    print(_sum)