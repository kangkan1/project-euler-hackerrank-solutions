#include <stdio.h>
#include <stdbool.h>
bool isPrime(long int i);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // store all the prime number in array
    
    int arr[10000];
    arr[0] = 2;
    arr[1] = 3;
    long int i,j,k, count=2;
    i=5;
    bool flag;
    while(count<10000){
         flag=isPrime(i);
        if(flag)
            {
            arr[count] = i;
            count++;
        }
        i=i+2;     
    }
    int t;
    scanf("%d", &t);
    long int n;
    while(t--)
        {
        scanf("%ld", &n);
        printf("%d \n", arr[n-1]);    
    }
    return 0;
}

bool isPrime(long int i){
    if(i<=1)
        return false;
    if(i == 2 || i == 3)
        return true;
    if(i%2 == 0 || i%3 == 0)
        return false;
    for(long int j=5;j*j<=i;j=j+6){
        if(i%j == 0 || i%(j+2) == 0){
            return false;
        }
    }            
    return true;     
}