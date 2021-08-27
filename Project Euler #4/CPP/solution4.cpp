#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> arr;
    for(int i=143;i<1000;i++){
        for(int j=100;j<1000;j++){
            int num = i*j;
            int n = num;
            int rev = 0;
            while(n>0){
                rev = rev*10+n%10;
                n/=10;
            }
            if(rev == num && num>=101101){
                arr.push_back(rev);
            }
        }
    }  
    sort(arr.begin(), arr.end());
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;  
        for(int i=arr.size()-1;i>-1;i--){
            if(n>arr[i]){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    
    return 0;
}
