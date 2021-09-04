#include <stdio.h>
// Dynamic programming approach
int main() {
    int n, temp, m, x, sum1=0, t;
	int sum[10001];
    int a[1000000];
    a[0] =1;
    m=1;
    temp=0;
    for(int i=1;i<=10000;i++){
        for(int j=0;j<m;j++){
            x = a[j]*2+temp; 
            a[j]=x%10; 
            temp = x/10; 
        }
        while(temp>0) { 
            a[m]=temp%10;
            temp = temp/10;
            m++; 
        }
        sum1=0;
        for(int k=m-1;k>=0;k--) {       
            sum1=sum1+a[k];
        }
        sum[i] =sum1;
    }           
	scanf("%d", &t) ;
	while(t--){
	    scanf("%d", &n); 
        printf("%d \n", sum[n]);
	}
    return 0;
}
	
