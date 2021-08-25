#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        int pro=1, max = 0;
        for(int i=0;i<n-k;i++){
            pro = 1;
            for(int j=i;j<i+k;j++){
                pro = pro*(s[j]-'0');
            }
            max = pro>max?pro:max;
        }
        cout<<max<<endl;
    }  
    return 0;
}
