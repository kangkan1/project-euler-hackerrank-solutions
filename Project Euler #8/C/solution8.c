#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        char* num = (char *)malloc(512000 * sizeof(char));
        scanf("%s",num);
        //printf("%s\n", num);
        int max = 0;
        for(int i=0;i<n-k;i++){
            int pro = 1;
            for(int j=i;j<i+k;j++){
                pro = pro*(num[j]-'0');
            }
            max = max<pro?pro:max;
        }
        printf("%d\n",max);
    }
    return 0;
}
