#include <iostream>

using namespace std;

int main() {
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum1 = (long)n*(n+1)/2;
        long long sum2 = (long)n*(n+1)*(2*n+1)/6;
        cout<<sum1*sum1-sum2<<endl;
    }
    return 0;
}
