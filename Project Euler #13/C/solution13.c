#include <stdio.h>
#include <math.h>

int main() {

    int t;
    scanf("%d", &t);
    long long sum=0, num=0;
    char ch[50];
    while(t--){
        scanf("%s", ch);
        num = 0;
        for(int i=0;i<13;i++){
            num = num*10+(ch[i]-'0');
        }
        sum +=num;
    }
    // to reduce the 10 digits
    long long mod = (long long)pow(10, 10);
    while(mod<sum){
        sum = sum/10;
    }
    printf("%lld", sum);
    return 0;
}
