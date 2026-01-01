#include<stdio.h>
int fact(int a);
int main(){
    int n, b, originalnum;
    int sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    originalnum = n;
    while(n>0){
        b = n%10;
        sum += fact(b);
        n = n/10;
    }
    n = originalnum;
    if(sum==n){
        printf("%d is a Strong Number", n);
    }
    else{
        printf("%d is Not a Strong Number", n);
    }
    return 0;
}
int fact(int a){
    if((a==0) || (a==1)){
        return 1;
    }else{
        return a*fact(a-1);
    }
}