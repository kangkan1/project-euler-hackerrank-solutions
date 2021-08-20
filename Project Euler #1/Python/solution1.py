def suma(a, n) -> int:
    s = n*(n + 1) // 2
    s = s*a
    return s

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        i = (n - 1) // 3
        j = (n - 1) // 5
        k = (n - 1) // 15
        s = suma(3, i) + suma(5, j) - suma(15, k)
        print(s)