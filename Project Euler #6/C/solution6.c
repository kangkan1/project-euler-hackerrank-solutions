#include <stdio.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long int n, sum1, sum2, sum;
    scanf("%d", &t);
    while(t--)
        {
        scanf("%ld", &n);
        // formula for sum of n natural numbers
        sum1 = n*(n+1)/2;
        // formula for sum of squares of n natural numbers
        sum2= (n*(n+1)*(2*n+1))/6;
        
        sum=sum1*sum1-sum2;
        printf("%ld \n", sum);
    }
    return 0;
}

