#include<stdio.h>
int main(){
    int a, b, rem;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    while(b!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    printf("The GCD is : %d", a);
    return 0;
}