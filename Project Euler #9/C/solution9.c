#include <stdio.h>

int main() {   
    int t;
    scanf("%d", &t);
    int a, b,c,n,flag;
    int large;
    while(t--){
        scanf("%d", &n);
        large=0;
        for(a=3;a<=n/3;a++){
            b=(n*n-2*n*a)/(2*n-2*a);
            c=n-a-b;
            if(a*a+b*b== c*c && a+b+c == n){
                if(a*b*c>large) large=a*b*c;
            }
            }
        if(large != 0) printf("%d \n", large);
        else printf("-1 \n");   
    }
    return 0;
}

