#include <stdio.h>
int main() {

    int choice, number1, number2;
    printf("select operators : \n");
    printf("1.Additions\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Floor Division\n");

    printf("enter the operators : ");
    scanf("%d",&choice);

    printf("enter the first number : ");
    scanf("%d",&number1);

    printf("enter the second number : ");
    scanf("%d",&number2);

    if (choice == 1)
    {
        printf("total additions %d",number1 + number2);
    } else if(choice == 2) {
        printf("total subtraction %d",number1 - number2);
    } else if (choice == 3)
    {
        printf("total multiplication %d",number1 * number2);
    } else if (choice == 4)
    {
        printf("total division %d",number1 / number2);
    } else if (choice == 5)
    {
        printf("total floor division %d",number1 % number2);
    } else {
        printf("wrong number input by users");
    }
    
    
    return 0;
}