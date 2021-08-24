#include <stdio.h>


int main(){
    int t; 
    scanf("%d",&t);
    while(t--){
        long n; 
        scanf("%ld",&n);
        long max_prime = 2;
        while(n%2 == 0){
            n /=2;
        }
        long i = 3;
        while(i*i <= n){
            while(n%i == 0){
                max_prime = i;
                n /=i;
            }
            i = i + 2;
        }
        if(max_prime > n)
            printf("%ld\n", max_prime);
        else
            printf("%ld\n", n);
            
            
    }
    return 0;
}
