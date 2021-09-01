#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    int sum=0, temp=0;
    for(int i=100;i<1000000;i++){
        int num = i;
        temp = 0;
        while(num){
            temp += pow(num%10, n);
            num/=10;
        }
        if(temp==i){
            sum+=i;
        }
    }
    printf("%d", sum); 
    return 0;
}
