#include<stdio.h>
#include<string.h>
int main(){
    char S[100], T[50];
    printf("Enter the main string(S) :\n");
    scanf("%s", S);
    printf("Enter the sub string(T) :\n");
    scanf("%s", T);
    char *ptr = strstr(S, T);
    if(ptr==NULL){
        printf("-1, sub string(T) doesn't found in main string(S)");
    }
    else{
        printf("sub string (T) at the index :%d", ptr - S);
    }

    return 0;
}