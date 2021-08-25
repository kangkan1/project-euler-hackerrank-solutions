#include <iostream>

using namespace std;


int prime(int n){
    if(n < 2) 
        return false;
    if(n==2 || n == 3)
        return true;
    if(n%2 == 0 || n%3 == 0)
        return false;        
    for(int i=5;i*i<=n;i=i+6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n; scanf("%d", &n);
    int ans = 0;
    int A, B;
    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            //n^2 + i*n + j
            int primes = 0;
            for(int k=0;;k++){
                if(prime(k*k+i*k+j)){
                    primes++;
                }else{
                    break;
                }
            }
            if(primes > ans){
                ans = primes;
                A = i;
                B = j;
            }
            if(ans >= n){
                i = n+1;
                break;
            }
        }
    }
    cout << A<<" "<<B <<endl;
}

