#include<stdio.h>
#include<string.h>
void checkpalindrome(char ch[]);
int main(){
    char str[50];
    printf("Enter a String : ");
    scanf("%s", &str);
    checkpalindrome(str);
    return 0;
}
void checkpalindrome(char ch[]){
    int flag = 0;// flag = 0 for a string to be a palindrome
    int start = 0;
    int end = strlen(ch) - 1;
    while(end>start){
        if(ch[end]!=ch[start]){
            flag = 1; //flag = 1 for a string not a palindrome
            break;
        }
        end--;
        start++;
    }
    if(flag==0){
        printf("The given string is a palindrome");
    }
    else{
        printf("The given string is not a palindrome");
    }
}