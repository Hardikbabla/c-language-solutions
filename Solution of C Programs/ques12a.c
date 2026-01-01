#include<stdio.h>
struct student{
    char name[50];
    int rollno;
    int marks[10];
};
int main(){
    struct student s;
    int i, total = 0;
    float percentage;
    printf("Enter your name : ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter your Roll no : ");
    scanf("%d", &s.rollno);
    //let we need marks of five subjects
    for(i=1;i<6;i++){
        printf("Marks is subject %d : ", i);
        scanf("%d", &s.marks[i]);
        total += (s.marks[i]);
    }
    percentage = (total)/5 ;
    printf("The total marks obtained out of 500 is %d\n", total);
    printf("You got %.2f %% , keep it up!!", percentage);

    return 0;
}