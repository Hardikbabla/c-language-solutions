#include<stdio.h>
int main(){
    int n, flag; // flag equal to zero for prime!!
    printf("Enter a number :");
    scanf("%d", &n);
    printf("The prime between 1 to %d is given below\n", n);
    for(int i=2;i<=n;i++){
        if(i==2){
            printf("%d ", i);
        }
        flag = 0; // this is important step to put the flag value again here! otherwise it will print 2 & 3 only.
        if(i>2){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    flag = 1;
                }
            }
            if(flag==0){
                printf("%d ", i);
            }
        }
    }
    return 0;
}

