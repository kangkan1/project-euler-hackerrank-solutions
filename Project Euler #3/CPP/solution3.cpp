#include <iostream>

using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        long n; 
        cin>>n;
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
            cout<<max_prime<<endl;
        else
            cout<<n<<endl;
            
            
    }
    return 0;

}
