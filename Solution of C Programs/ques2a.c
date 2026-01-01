#include<stdio.h>
int main(){
    int n, first, second, next;
    printf("Enter the number :");
    scanf("%d", &n);
    first = 0;
    second = 1;
    for(int i=0;i<n;i++){
        if((i==0) || (i==1)){
            printf("%d ", i);
        }
        if(i>1){
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    return 0;
}