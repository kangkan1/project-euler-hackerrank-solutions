#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int large = 0;
        for(int a=3;a<=n/3;a++){
            int b = (n*n-2*n*a)/(2*n-2*a);
            int c = n-a-b;
            if(a*a+b*b == c*c && a+b+c==n){
                if(a*b*c>large)
                    large = a*b*c;
            }
        }
        if(large != 0)
            cout<<large<<endl;
        else
            cout<<-1<<endl;    
    }  
    return 0;
}
