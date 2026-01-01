#include<stdio.h>
int main(){
    int arr[10], temp;
    int n = 10;
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-1-i);j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;

        }
    }
    }
    printf("Sorted Array (Ascending Order) : ");
    for(int i=0;i<10;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}