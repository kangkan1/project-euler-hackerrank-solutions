#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int i, n, f1,f2,f, sum;
        // n <= 4*10^16 , so long long
        cin>>n;
        f1=0;
        f2=1;
        f = f1+f2;
        sum = 0;
        while(f<n){
            if(f%2==0){
                sum += f;
            }
            f = f1+f2;
            f1=f2;
            f2=f;
        }
        cout<<sum<<endl;  
    }
    return 0;
}