#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    long long int i, n, f1,f2,f, sum;
    while(t--)
        {
        scanf("%lld", &n);
        f1=0;
        f2=1;
        sum=0;
        while(1)
            {
            f=f1+f2;
            f1=f2;
            f2=f;
            if(f>=n) break;
            else if(f%2==0) sum=sum+f;
        }
        printf("%lld \n", sum);
    }
    return 0;
}
