#include <cmath>
#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int sum = 0, temp=0;
    for(int i=100;i<1000000;i++){
        int num = i;
        temp=0;
        while(num){
            temp += pow(num%10, n);
            num/=10;
        }
        if(temp == i){
            sum+=i;
        }
    } 
    cout<<sum;
    return 0;
}
