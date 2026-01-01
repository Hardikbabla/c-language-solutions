#include<stdio.h>
int main(){
    int n, b;
    int sum = 0;
    printf("Enter a Positive Integer :\n");
    scanf("%d", &n);
    if((n<0)||(n==0)){
        printf("Invalid No Please Enter the Postive integer!!");
    } 
    if(n>0){
        while(n>0){
            b = n%10;
            sum = sum + b;
            n = n/10;
        }
        printf("The sum of individual digits of the given Positive Integer is : %d", sum);
    }
    return 0;
}