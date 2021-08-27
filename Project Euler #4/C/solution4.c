#include <stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quickSort(int arr[], int low, int high){
    int pivot;
    if(low<high){
        pivot=partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}
int main(){
    int *arr = NULL; 
    int size = 972;
    //n = 972 is precalculated
    arr = (int*)malloc(sizeof(int)*972);
    int k=0;
    for(int i=143;i<1000;i++){
        for(int j=100;j<1000;j++){
            int num = i*j;
            int n=num;
            int rev = 0;
            while(n>0){
                rev = rev*10+n%10;
                n /=10;
            }
            if(rev == num && num>=101101){
                arr[k++] = num;
            }
        }
    }
    quickSort(arr, 0, size);
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i=size-1;i>-1;i--){
            if(n>arr[i]){
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}