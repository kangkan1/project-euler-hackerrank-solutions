#include <iostream>

using namespace std;

int main() {
    int t;
    int arr[3000];
    int n,i,j,temp,m,x;
    int sum =0;
    cin>>t;
    while(t--){
       cin>>n;
       arr[0]=1;  
       m=1;   
       for(i=1;i<=n;i++){
        for(j=0;j<m;j++){
            temp=arr[j]*i+temp;
            arr[j] = temp%10;
            temp=temp/10;
        }
        while(temp>0){
            arr[m] = temp%10;
            temp=temp/10;
            m++;                
        }                 
       }
       sum=0;
       for(int j=m-1;j>=0;j--){
           sum+=arr[j];
       }
       cout<<sum<<endl;
    }
    return 0;
}

