#include <stdio.h>
int main() {

    char name[20];
    int range;

    printf("enter your name : ");
    scanf("%s",&name);

    printf("enter a range for print name : ");
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        printf("your name : %s\n",name);
    }
    

    return 0;
}