
if __name__ == "__main__":
	t = int(input().strip())
	for a0 in range(t):
	    n = int(input().strip())
	    large = 0
	    for a in range(1,n//3,1):
	        b = (n*n-2*n*a)//(2*n-2*a)
	        c = n-a-b
	        #large = 0
	        if a*a+b*b == c*c and a+b+c == n:
	            if a*b*c > large:
	                large = a*b*c
	    if large != 0:
	        print(large)  
	    else:
	        print(-1) 