#include<stdio.h>
#include<string.h>
int main(){
    char S[100], T[50];
    printf("Enter the main string(S) :\n");
    fgets(S, sizeof(S), stdin);
    printf("Enter the sub string(T) :\n");
    fgets(T, sizeof(T), stdin);
    char *ptr = strstr(S, T);
    if(ptr==NULL){
        printf("-1, sub string(T) doesn't found in main string(S)");
    }
    else{
        printf("sub string (T) found at the index :%d", ptr - S);
    }

    return 0;
}