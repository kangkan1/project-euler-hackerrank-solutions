
#include <iostream>

using namespace std;

int hcf(int a, int b);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num = 1;
        for(int i=2;i<=n;i++){
            num = num*i/hcf(num, i);
        }
        cout<<num<<endl;
    }   
    return 0;
}

int hcf(int a, int b){
    if(a==0)
        return b;
    return hcf(b%a, a);    
}
