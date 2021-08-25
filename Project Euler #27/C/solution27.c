#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n);
int main() {
    int n;
    int prime=0, ans=0;
    int A,B;
    scanf("%d", &n);
    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            prime = 0;
            int k = 0;
            while(isPrime(k*k+i*k+j)){
                k++;
                prime++;
            }
            if(prime>ans){
                A = i;
                B = j;
                ans = prime;
                
            }
        }
    }
    printf("%d %d\n", A, B);
    return 0;
}
bool isPrime(int n){
    if(n<2)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i == 0 || n%(i+2) == 0)
            return false;
    }
    return true;        
}