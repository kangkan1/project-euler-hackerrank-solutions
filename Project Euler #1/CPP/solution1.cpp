#include <iostream>

using namespace std;

int find_sum(int n);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin >> n;
    //int t;
    long long int sum, a,b,c,t;
    while(n--){
        cin >> t;
        a=(t-1)/3;
        b=(t-1)/5;
        c=(t-1)/15;
        sum = 3*a*(a+1)/2 + 5*b*(b+1)/2 - 15*c*(c+1)/2;
        cout << sum <<endl;
    } 
    return 0;
}
int find_sum(int n){
    int sum=0;
    if(n>=3){
        sum+=3*(6+(n/3-1)*3)/2;
    }
    if(n>=5){
        sum+=5*(10+(n/5-1)*5)/2;
    }
    if(n>=15){
        sum-=15*(30+(n/15-1)*15)/2;
    }
     return sum;
}

