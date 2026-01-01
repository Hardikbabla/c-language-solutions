#include<stdio.h>
int swap(int *a, int *b);
int main(){
    int x, y;
    printf("Enter the value of x and y : ");
    scanf("%d %d", &x, &y);
    printf("The value of x is %d & y is %d in the main function\n", x, y);
    swap(&x, &y);
    printf("The value of x is %d & y is %d after execution the swap function\n", x, y);
    return 0;
}
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("The value of x is %d & y is %d inside swap function\n", *a, *b);
    return 0;
}