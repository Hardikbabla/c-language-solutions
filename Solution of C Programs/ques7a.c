#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the numbers : ");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("The largest number is %d and smallest number is %d", largest, smallest);
    return 0;
}