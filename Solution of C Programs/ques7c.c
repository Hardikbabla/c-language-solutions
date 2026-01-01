#include<stdio.h>
int main(){
    int A[3][3], flag;
    printf("Enter the elements of the Matrix A : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &A[i][j]);
        }
    }
    flag = 1; // flag = 1 is used for symmetric matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(A[i][j]!=A[j][i]){
                flag = 0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==1){
        printf("The matrix A is Symmetric");
    }
    else{
        printf("The matrix A is Not Symmetric");
    }

    return 0;
}