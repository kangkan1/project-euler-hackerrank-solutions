
#include <stdio.h>

int hcf(int a, int b);
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int num = 1;
        for(int i=2;i<=n;i++){
            num = num*i/hcf(num,i);
        }
        printf("%d\n", num);
    }
    return 0;
}
int hcf(int a, int b){
    if(a==0)
        return b;
    return hcf(b%a, a);    
}
