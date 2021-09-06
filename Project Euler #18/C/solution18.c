#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int **arr;
        arr = (int **) malloc(sizeof(int *) * n);
        for (int i = 0; i < n; i++) {
            arr[i] = (int *) malloc(sizeof(int) * n);
        }
        int j = 0;
        for(int i=0;i<n;i++){
            for(int k=0;k<=i;k++){
                scanf("%d", &arr[i][k]);
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                arr[i][j] += (arr[i+1][j]<arr[i+1][j+1]?arr[i+1][j+1]:arr[i+1][j]);
            }
        }
        printf("%d\n", arr[0][0]);
    }     
    return 0;
}
