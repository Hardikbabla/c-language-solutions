#include<stdio.h>
int main(){
    int arr[5], sum = 0;
    int *ptr;
    printf("Enter the five elements : ");
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for(int i=0;i<5;i++){
        sum += (*ptr + i);
    }
    printf("The sum of the array element is %d", sum);

    return 0;
}