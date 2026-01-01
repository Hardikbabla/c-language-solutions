#include<stdio.h>
int main(){
    float a, b, c, sum, avg; // float because avg can be in decimal
    printf("Enter the  values of a, b & c :\n");
    scanf("%f %f %f", &a, &b, &c);
    sum = a + b + c ;
    //.2f is used here to print the decimal number upto two decimal places
    printf("The sum of a, b & c is %.2f\n", sum);
    avg = (sum)/3;
    printf("The average of a, b & c is %.2f\n", avg);

    return 0;
}