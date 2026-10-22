#include <stdio.h>
int main() {

    char name[10];
    int roll_no;
    float marks;

    printf("enter your name : ");
    scanf("%s",&name);

    printf("enter your roll no : ");
    scanf("%d",&roll_no);

    printf("enter your marks : ");
    scanf("%f",&marks);

    printf("students details : ");
    printf("\nname : %s",name);
    printf("\nroll number : %d",roll_no);
    printf("\nmarks : %f",marks);

    return 0;
}