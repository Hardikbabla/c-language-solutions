#include<stdio.h>
int main(){
    int n, b, originalnum;
    int sum = 0;
    printf("Enter a three digit number : ");
    scanf("%d", &n);
    originalnum = n; //this is an important point to note that the value of one variable can be equal to the value of the another variable only if the another variable has a value assigned
    while(n>0){
        b = n%10;
        sum += (b*b*b);
        n /= 10;
    }
    n = originalnum;
    if(sum==n){
        printf("%d is an Armstrong Number", n);
    }
    else{
        printf("%d is not an Armstrong Number", n);
    }
    return 0;
}