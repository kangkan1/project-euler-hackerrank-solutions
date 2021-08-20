#include <stdio.h>
long long sum(int a, long long int n);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int i,j,k,n,s=0;
    int t;
    scanf("%d", &t);
    while(t--)
        {
        scanf("%lld", &n);
        i=(n-1)/3;
        j=(n-1)/5;
        k=(n-1)/15;
        s=sum(3,i)+sum(5,j)-sum(15,k);
        printf("%lld \n", s);
    }
    
    return 0;
}

long long sum(int a, long long int n)
    {
    long long sum;
    sum=a*n*(n+1)/2;
    return sum;
}