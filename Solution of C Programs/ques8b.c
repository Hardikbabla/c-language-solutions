#include<stdio.h>
int main(){
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the element of the first matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element of the second matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &b[i][j]);
        }
    }
    //multiplication take place here
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j] = 0;
            for(int k=0;k<3;k++){
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    //printing the c matrix
    printf("Matrix that get after the multiplication:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}