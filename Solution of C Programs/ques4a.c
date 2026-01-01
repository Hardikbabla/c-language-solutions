#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, D, x, y, real, img;
    printf("Enter the value of a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - (4*a*c);
    if(D>0){
        printf("Roots are Real\n");
        x = (-b + sqrt(D))/(2*a);
        y = (-b - sqrt(D))/(2*a);
        printf("Roots are x = %.2f, y = %.2f", x, y);
    }
    if(D==0){
        printf("Roots are Real and Equal\n");
        x = y = (-b)/(2*a);
        printf("Roots are x = %.2f, y = %.2f", x, y);
    }
    if(D<0){
        printf("Roots are imaginary\n");
        real = (-b)/(2*a);
        img = (sqrt(-D))/(2*a);
        printf("Roots are x = %.2f + %.2fi , y = %.2f - %.2fi", real, img, real, img);
    }

    return 0;
}