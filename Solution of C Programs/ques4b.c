#include<stdio.h>
int main(){
    int n, a, b;
    printf("Enter the two number : ");
    scanf("%d %d", &a, &b);
    printf("what Operation did you want:(1-Add),(2-Sub),(3-Div),(4-Mult) :");
    scanf("%d", &n);
    switch(n){
        case(1):
            printf("The Addition of %d & %d is %d", a, b, a+b);
            break;
        case(2):
            printf("The Subtraction of %d & %d is %d", a, b, a-b);
            break;
        case(3):
            printf("The Division of %d & %d is %d", a, b, a/b);
            break;
        case(4):
            printf("The Multiplication of %d & %d is %d", a, b, a*b);
            break;
        default:
            printf("You Entered Invalid No for Operation!!");
            break;
    }
    return 0;
}